#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Wed Jan 18 11:42:54 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-1.175611,1.171633,11.00247);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.279782e+09);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(1.930895);
   st_stack_189->SetMaximum(6.090616e+09);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Events/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,2.20856e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,9997770);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,4978328);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,2777152);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,1671177);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,1079652);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,622091.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,417831.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,306674.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,215264);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,154766);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,95449.82);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,67648.01);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,24128.01);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,13344.72);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,13837);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,6180.96);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,2698.286);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,2110.739);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,397.3075);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,49.79151);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,346766.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,255448.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,177239.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,133555.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,103445.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,87016.89);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,59282.49);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,52593.25);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,45494.24);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,37366.89);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,35644.94);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,27427.63);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,24964.31);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,4577.943);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,3228.266);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,4006.431);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,2637.368);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,1513.855);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,1687.461);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,325.945);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,32.47738);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(482555);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.06536696);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,712214.1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,492225.8);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,325396.7);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,221815.9);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,154974.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,110206);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,79200.87);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,57220.79);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,41332.46);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,29808.18);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,21352.22);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,15043.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,10554.81);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,7218.473);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,4808.615);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,3117.565);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,1949.589);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,1156.103);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,633.5268);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,312.3045);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,141.6849);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,48.28902);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,15.23233);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,1.994611);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.1482259);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.05560696);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,224.121);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,187.3098);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,152.6098);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,126.1621);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,105.5513);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,89.08703);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,75.55701);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,64.23522);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,54.63249);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,46.40714);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,39.29804);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,32.99295);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,27.65466);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,22.86362);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,18.66792);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,15.03026);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,11.90527);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,9.156139);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,6.785956);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,4.75506);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,3.212379);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,1.878282);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,1.056887);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.3770097);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.1052467);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(3.456552e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
