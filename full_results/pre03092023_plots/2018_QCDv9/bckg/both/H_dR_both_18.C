#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Feb 16 10:35:34 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.353788,-252025.8,7.264125,1848189);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLeftMargin(0.15709);
   H_dR_both_18->SetRightMargin(0.1234783);
   H_dR_both_18->SetBottomMargin(0.12);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1638168);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(0);
   st_stack_151->SetMaximum(1638168);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_151->GetXaxis()->SetRange(1,31);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetTitleOffset(1);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Events/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetTitleSize(0.037);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetTitleOffset(1);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,141.469);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,492130.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,526567.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,412339.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,335514.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,435525.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,371202.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,437489.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,497839.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,506789.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,519906.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,611154.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,866018.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,826242.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,938880.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,644598.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,462347.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,354860.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,264741.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,228828.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,148416.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,113362.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,77689.47);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,44811.56);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,31960.46);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,7871.331);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,1768.024);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,412.7539);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,63.30598);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,18376.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,20272.06);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,29367.65);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,15076.93);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,41831.27);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,19580.19);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,34090.64);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,43895.45);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,30792.09);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,17783.68);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,20699.71);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,68065.39);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,37238.22);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,58759.74);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,48832.75);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,37206.66);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,17829.26);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,26872.23);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,35953.83);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,10514.21);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,9394.824);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,7632.942);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,6522.39);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,6169.357);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,1791.33);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,647.4029);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,394.0815);
   VbbHcc_both_H_dR_stack_1->SetEntries(266336);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,36.58353);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,38182.67);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,67170.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,78790.85);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,84540.72);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,81667.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,76373.65);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,74819.74);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,78869.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,88007.96);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,100645.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,116280.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,133419.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,150281.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,153231.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,86940.24);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,54356.11);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,35520.01);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,23485.68);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,15373.24);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,9897.72);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,6178.607);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,3634.992);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1900.07);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,926.2176);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,373.908);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,97.33865);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,6.825626);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,4.02299);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,59.85944);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,78.72895);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,84.72091);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,87.76133);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,86.32811);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,83.55277);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,83.16422);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,85.84985);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,90.023);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,96.80283);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,103.4473);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,110.9496);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,118.3446);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,119.1867);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,90.01866);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,71.19667);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,56.80409);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,46.41883);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,37.03918);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,30.26747);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,23.79504);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,17.99673);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,12.53216);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,8.748189);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,5.711857);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,2.783416);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.7666513);
   VbbHcc_both_H_dR_stack_2->SetEntries(2.086813e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
