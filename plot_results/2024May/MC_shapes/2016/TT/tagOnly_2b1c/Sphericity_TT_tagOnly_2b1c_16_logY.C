#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_TT_tagOnly_2b1c_16/Sphericity_TT_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagOnly_2b1c_16 = new TCanvas("Sphericity_TT_tagOnly_2b1c_16", "Sphericity_TT_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_TT_tagOnly_2b1c_16->Range(-0.2,-1.792516,1.133333,6.639921);
   Sphericity_TT_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_TT_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_TT_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_TT_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_TT_tagOnly_2b1c_16->SetLogy();
   Sphericity_TT_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_TT_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_TT_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3316 = new TH1D("VH_tagOnly_2b1c_Sphericity__3316","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(1,330467.5);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(2,311471.4);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(3,170539.3);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(4,94782.69);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(5,52850.69);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(6,28975.86);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(7,15819.99);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(8,9205.425);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(9,5741.779);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(10,3829.083);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(11,2651.818);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(12,1907.874);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(13,1389.515);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(14,1029.888);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(15,784.5444);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(16,568.3637);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(17,413.9988);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(18,266.6397);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(19,151.2814);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(20,64.95432);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(21,23.84433);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(22,6.624368);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(23,1.475794);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinContent(24,0.2247802);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(1,142.5445);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(2,137.4708);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(3,101.9464);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(4,76.31254);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(5,57.17111);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(6,42.39081);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(7,31.28078);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(8,23.86762);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(9,18.88508);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(10,15.46268);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(11,12.89015);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(12,10.96554);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(13,9.389456);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(14,8.11008);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(15,7.074295);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(16,6.023842);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(17,5.137917);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(18,4.12299);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(19,3.089901);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(20,2.028253);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(21,1.238622);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(22,0.6688622);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(23,0.3088507);
   VH_tagOnly_2b1c_Sphericity__3316->SetBinError(24,0.1036009);
   VH_tagOnly_2b1c_Sphericity__3316->SetEntries(1.860522e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3316->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3316->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3316->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3316->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3316->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3316->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3316->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3316->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3316->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3316->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3316->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3316->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3316->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3316->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3316->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3316->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagOnly_2b1c_16->Modified();
   Sphericity_TT_tagOnly_2b1c_16->cd();
   Sphericity_TT_tagOnly_2b1c_16->SetSelected(Sphericity_TT_tagOnly_2b1c_16);
}
