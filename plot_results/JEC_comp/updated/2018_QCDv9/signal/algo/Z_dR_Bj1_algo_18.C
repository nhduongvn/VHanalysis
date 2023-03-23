#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(-1.310117,-0.06313015,7.029799,0.4629545);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.410346);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(0);
   st_stack_151->SetMaximum(0.410346);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_151->GetXaxis()->SetRange(1,30);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetTitleOffset(1);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Event/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetTitleSize(0.037);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetTitleOffset(1);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.143373);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.2548853);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.1570276);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.06827286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.03868795);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.009103048);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.0182061);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.0180633);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.0240844);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.0189039);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.01246486);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.009383207);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.006436827);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(320);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.03895538);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.08570184);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.05723445);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.0263698);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.01048799);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.003296225);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.003296225);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.003895538);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.002397254);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.001797941);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.002397254);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.001198627);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.001198627);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.003416613);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.005067656);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.004141339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.00281103);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.001772794);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.0009938492);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.0009938492);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.001080428);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.0008475574);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.0007340063);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0008475574);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(817);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
