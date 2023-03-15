#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-79667.49,1.171633,584228.2);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15709);
   Aplanarity_algo_16->SetRightMargin(0.1234783);
   Aplanarity_algo_16->SetBottomMargin(0.12);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(517838.7);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(0);
   st_stack_125->SetMaximum(517838.7);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("Aplanarity");
   st_stack_125->GetXaxis()->SetRange(1,50);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetTitleOffset(1);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Event/0.02");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetTitleOffset(1);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,416035.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,225744.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,90881.14);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,41352.72);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,30268.19);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,18336.24);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,10125.99);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,8702.531);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,4290.165);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,2654.503);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,659.2488);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,1103.867);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,728.9564);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,695.6563);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,349.9047);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,58.7423);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,25.41782);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,291.7287);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,14455.05);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,31418.45);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,7525.266);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,5391.641);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,4623.819);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,3748.936);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,3000.539);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,2883.493);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,1681.322);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,1756.127);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,308.3637);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,539.7354);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,427.2141);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,447.6668);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,334.8021);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,36.4302);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,25.41782);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,291.7287);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(22714);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,13770.6);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,9661.37);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,6429.97);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,4434.3);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,3168.174);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,2280.083);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,1665.862);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1234.484);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,924.8169);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,676.2332);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,494.1483);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,356.5165);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,251.7649);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,180.0789);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,122.9811);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,78.50983);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,49.64938);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,29.70324);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,15.70976);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,7.859654);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,3.095617);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,1.150317);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,0.6825873);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.05519255);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,29.90895);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,25.34544);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,20.78894);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,17.33666);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,14.69555);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,12.48559);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,10.69223);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,9.221061);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,7.99801);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,6.845005);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,5.85217);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,4.984769);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,4.19144);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,3.549882);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,2.935841);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,2.347855);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,1.868491);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,1.442247);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.048355);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,0.7483466);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.4645981);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.2771801);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2292878);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.05519255);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(736178);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
