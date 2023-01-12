#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,0.5964859,7.029799,2.368059);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLogy();
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(127.1277);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(6.4428);
   st_stack_107->SetMaximum(155.2036);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Events/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.1394053);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.9293689);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.9804842);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.6319709);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.3461899);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.1556693);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.07899636);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.03717476);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.03020449);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.02323422);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.01858738);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.006970267);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,0.006970267);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,0.002323422);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.01799715);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.04646845);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.04772922);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.03831886);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.02836098);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.01901803);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.01354776);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.009293689);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.008377218);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.007347306);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.006571631);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.004024285);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,0.004024285);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,0.002323422);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(1458);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.03269272);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.2962993);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.2907931);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.1238882);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.05609382);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.0244335);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.01273295);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.01032402);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.001032402);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.001720669);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.002064803);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.001376535);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.003354202);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.01009785);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.01000359);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.006529481);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.004393607);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.002899723);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.002093285);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.001884899);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.001088247);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0005960573);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0007695067);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0008429524);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0006882677);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.0003441339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2495);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
