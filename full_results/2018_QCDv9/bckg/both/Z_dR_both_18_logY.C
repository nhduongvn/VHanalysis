#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,-2.108782,7.029799,10.60371);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLogy();
   Z_dR_both_18->SetLeftMargin(0.15709);
   Z_dR_both_18->SetRightMargin(0.1234783);
   Z_dR_both_18->SetBottomMargin(0.12);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.402639);
   st->SetMaximum(7.820643e+08);
   
   TH1F *st_stack_131 = new TH1F("st_stack_131","",30,0,6);
   st_stack_131->SetMinimum(0.261046);
   st_stack_131->SetMaximum(2.150098e+09);
   st_stack_131->SetDirectory(0);
   st_stack_131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_131->SetLineColor(ci);
   st_stack_131->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_131->GetXaxis()->SetRange(1,30);
   st_stack_131->GetXaxis()->SetLabelFont(42);
   st_stack_131->GetXaxis()->SetTitleOffset(1);
   st_stack_131->GetXaxis()->SetTitleFont(42);
   st_stack_131->GetYaxis()->SetTitle("Events/0.2");
   st_stack_131->GetYaxis()->SetLabelFont(42);
   st_stack_131->GetYaxis()->SetTitleSize(0.037);
   st_stack_131->GetYaxis()->SetTitleFont(42);
   st_stack_131->GetZaxis()->SetLabelFont(42);
   st_stack_131->GetZaxis()->SetTitleOffset(1);
   st_stack_131->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_131);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,4423.023);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,6227363);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,7413419);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,5439746);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,4858456);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,4283120);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,4247429);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,4174035);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,4801443);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,4350067);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,4704126);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,5745901);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,5929932);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,6943320);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,7363927);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,4146658);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,2909816);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,2275901);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,1450806);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,767457.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,597013.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,441876.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,286574.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,232402.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,53650.82);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,38197);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,4549.015);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1398.815);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,2032.908);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,210349.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,243777.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,203180.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,205307.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,182290.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,195057);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,195253.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,233522.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,212763.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,211727.8);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,252432.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,252139.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,293920.8);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,289842.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,203675.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,172650.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,171070.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,128344.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,71333.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,68986.21);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,68042.01);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,64342.15);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,58226.68);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,8483.301);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,18857.34);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,2601.431);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,1398.254);
   VbbHcc_both_Z_dR_stack_1->SetEntries(600060);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,43.25648);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,64575.18);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,125386.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,149700.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,182309.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,213015.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,242115.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,271045.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,300320.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,332069);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,365274.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,400525.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,435327.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,466339.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,456716.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,241642.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,138025.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,82316.19);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,48818.69);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,28372.82);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,16002.68);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,8703.005);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,4469.871);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,2104.732);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,884.2848);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,314.9472);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,75.33653);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,3.824183);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.935596);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,78.23185);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,109.1378);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,118.9759);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,131.941);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,142.2861);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,151.8161);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,160.2814);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,168.7743);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,177.8445);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,186.15);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,194.7968);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,203.6423);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,211.4102);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,208.9973);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,152.7446);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,115.2216);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,88.75096);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,68.49848);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,52.48771);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,39.42282);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,29.20835);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,20.17942);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,13.8918);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,9.661008);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,5.418356);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,3.535964);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.5388635);
   VbbHcc_both_Z_dR_stack_2->SetEntries(5.975773e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
