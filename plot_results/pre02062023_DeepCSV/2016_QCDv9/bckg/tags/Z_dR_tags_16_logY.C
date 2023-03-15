#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Wed Jan 18 11:42:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.310117,-1.010292,7.029799,10.07717);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15709);
   Z_dR_tags_16->SetRightMargin(0.1234783);
   Z_dR_tags_16->SetBottomMargin(0.12);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.699302e+08);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(2.090275);
   st_stack_17->SetMaximum(9.298655e+08);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,1198.002);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,2836324);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,3640012);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,2774203);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,2328971);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,2099615);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,2137934);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,2063803);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,2099041);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,2170993);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,2417426);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,2458324);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,3009836);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,3249466);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,3424110);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,2179223);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,1490747);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,989200.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,580941.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,566009.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,336262.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,271424.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,149878.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,63733.05);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,43498.82);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,6892.794);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,1077.052);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,0.4453776);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,513.7337);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,87413.09);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,117773.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,115616.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,97325.65);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,99553.55);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,113663.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,109292.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,113671.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,118047.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,130259.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,122482.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,149728.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,148192.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,156292.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,128914.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,112592);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,86369.57);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,60166.06);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,69518.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,55260.62);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,50315.03);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,31176.39);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,19535.84);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,18201.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,2375.638);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,631.9508);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,0.4453776);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(458027);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,23.75373);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,30449.17);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,59290.68);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,71263.83);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,87090.04);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,101838.5);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,115681.3);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,129358.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,143827.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,158807.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,175410.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,192944.9);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,210283.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,225804.8);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,221527.6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,115841.7);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,65790.13);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,38691.51);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,22693.52);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,13021.4);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,7289.811);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,3894.875);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,1973.991);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,918.1241);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,378.6423);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,129.4515);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,30.90795);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,1.045672);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,1.295711);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,46.36278);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,64.80007);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,71.11995);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,78.65037);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,85.07071);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,90.67789);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,95.89613);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,101.1454);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,106.3087);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,111.7932);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,117.3043);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,122.5665);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,127.092);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,125.9839);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,91.11507);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,68.64942);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,52.63239);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,40.28488);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,30.49661);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,22.75959);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,16.61061);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,11.76829);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,8.018079);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,5.123158);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,2.986398);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.441237);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.2610136);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(3.311648e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
