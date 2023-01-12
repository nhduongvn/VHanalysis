#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,0.629599,7.029799,2.244521);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(100.8296);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",30,0,6);
   st_stack_106->SetMinimum(6.658703);
   st_stack_106->SetMaximum(121.0679);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_106->GetXaxis()->SetRange(1,30);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Events/0.2");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.1269663);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.6522893);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.7744943);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.4348595);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.263455);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.1285534);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.07459269);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.03491573);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.02063202);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.01428371);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.009522471);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.006348314);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,0.003174157);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.01419526);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.03217506);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.03505971);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.02627082);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.02044808);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.01428371);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.01088046);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.007444058);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.005722293);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.004761236);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.003887533);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.003174157);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,0.002244468);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,0.001587079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(1606);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.02958396);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.2022307);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.2338016);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.09206352);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.0401812);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.01788284);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.007285602);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.00684405);
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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.002555665);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.006681889);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.007184549);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.00450837);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.002978429);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.001986982);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.001268261);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.001229228);
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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2897);

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
