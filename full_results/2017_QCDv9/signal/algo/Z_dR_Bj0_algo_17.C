#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-0.2312792,7.029799,1.696048);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.503315);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0);
   st_stack_114->SetMaximum(1.503315);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.1269663);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.645941);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.7697331);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.4332724);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.2666292);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.1285534);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.07459269);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.03491573);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.02063202);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.01428371);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.009522471);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.006348314);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,0.003174157);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.01419526);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.03201811);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.03495178);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.02622284);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.02057089);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.01428371);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.01088046);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.007444058);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.005722293);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.004761236);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.003887533);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.003174157);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,0.002244468);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(1599);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.02980474);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.2017891);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.2324769);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.09184274);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.03996042);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.01788284);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.007285602);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.006623275);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.002428534);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.001986982);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.001766207);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0006623275);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.0008831033);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0004415516);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.0004415516);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,0.0004415516);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.002565183);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.00667459);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.007164167);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.004502961);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.002970235);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.001986982);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.001268261);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.001209239);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0007322306);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0006623275);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0006244483);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0003823949);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0004415516);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0003122242);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0003122242);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,0.0003122242);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.0002207758);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
