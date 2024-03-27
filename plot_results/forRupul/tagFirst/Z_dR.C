#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR()
{
//=========Macro generated from canvas: Z_dR/Z_dR
//=========  (Wed Mar 27 16:46:16 2024) by ROOT version 6.28/10
   TCanvas *Z_dR = new TCanvas("Z_dR", "Z_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR->SetHighLightColor(2);
   Z_dR->Range(-1.2,-0.05332085,6.8,0.4798876);
   Z_dR->SetFillColor(0);
   Z_dR->SetFillStyle(4000);
   Z_dR->SetBorderMode(0);
   Z_dR->SetBorderSize(2);
   Z_dR->SetLeftMargin(0.15);
   Z_dR->SetFrameFillStyle(1000);
   Z_dR->SetFrameBorderMode(0);
   Z_dR->SetFrameFillStyle(1000);
   Z_dR->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__5 = new TH1D("VH_tagFirst_Z_dR__5","",30,0,6);
   VH_tagFirst_Z_dR__5->SetBinContent(3,0.2981529);
   VH_tagFirst_Z_dR__5->SetBinContent(4,0.4007488);
   VH_tagFirst_Z_dR__5->SetBinContent(5,0.4062541);
   VH_tagFirst_Z_dR__5->SetBinContent(6,0.2799852);
   VH_tagFirst_Z_dR__5->SetBinContent(7,0.2030322);
   VH_tagFirst_Z_dR__5->SetBinContent(8,0.07828394);
   VH_tagFirst_Z_dR__5->SetBinContent(9,0.06833454);
   VH_tagFirst_Z_dR__5->SetBinContent(10,0.09182844);
   VH_tagFirst_Z_dR__5->SetBinContent(11,0.07038981);
   VH_tagFirst_Z_dR__5->SetBinContent(12,0.07344255);
   VH_tagFirst_Z_dR__5->SetBinContent(13,0.06969202);
   VH_tagFirst_Z_dR__5->SetBinContent(14,0.05825696);
   VH_tagFirst_Z_dR__5->SetBinContent(15,0.06362485);
   VH_tagFirst_Z_dR__5->SetBinContent(16,0.08919877);
   VH_tagFirst_Z_dR__5->SetBinContent(17,0.0465909);
   VH_tagFirst_Z_dR__5->SetBinContent(18,0.07081102);
   VH_tagFirst_Z_dR__5->SetBinContent(19,0.04615373);
   VH_tagFirst_Z_dR__5->SetBinContent(20,0.05048973);
   VH_tagFirst_Z_dR__5->SetBinContent(21,0.05480102);
   VH_tagFirst_Z_dR__5->SetBinContent(22,0.0220763);
   VH_tagFirst_Z_dR__5->SetBinContent(23,0.02148588);
   VH_tagFirst_Z_dR__5->SetBinContent(24,0.02809754);
   VH_tagFirst_Z_dR__5->SetBinContent(25,0.03411971);
   VH_tagFirst_Z_dR__5->SetBinContent(26,0.01643087);
   VH_tagFirst_Z_dR__5->SetBinContent(27,0.06692178);
   VH_tagFirst_Z_dR__5->SetBinContent(28,0.03692031);
   VH_tagFirst_Z_dR__5->SetBinContent(29,0.02929134);
   VH_tagFirst_Z_dR__5->SetBinContent(30,0.0199897);
   VH_tagFirst_Z_dR__5->SetBinContent(31,0.02431377);
   VH_tagFirst_Z_dR__5->SetBinError(3,0.0394979);
   VH_tagFirst_Z_dR__5->SetBinError(4,0.03657706);
   VH_tagFirst_Z_dR__5->SetBinError(5,0.04260668);
   VH_tagFirst_Z_dR__5->SetBinError(6,0.02965198);
   VH_tagFirst_Z_dR__5->SetBinError(7,0.02632876);
   VH_tagFirst_Z_dR__5->SetBinError(8,0.01562823);
   VH_tagFirst_Z_dR__5->SetBinError(9,0.01534725);
   VH_tagFirst_Z_dR__5->SetBinError(10,0.0274376);
   VH_tagFirst_Z_dR__5->SetBinError(11,0.01623126);
   VH_tagFirst_Z_dR__5->SetBinError(12,0.01557008);
   VH_tagFirst_Z_dR__5->SetBinError(13,0.01479503);
   VH_tagFirst_Z_dR__5->SetBinError(14,0.0140805);
   VH_tagFirst_Z_dR__5->SetBinError(15,0.01371563);
   VH_tagFirst_Z_dR__5->SetBinError(16,0.01845637);
   VH_tagFirst_Z_dR__5->SetBinError(17,0.01182538);
   VH_tagFirst_Z_dR__5->SetBinError(18,0.01461091);
   VH_tagFirst_Z_dR__5->SetBinError(19,0.01188301);
   VH_tagFirst_Z_dR__5->SetBinError(20,0.01366534);
   VH_tagFirst_Z_dR__5->SetBinError(21,0.0154073);
   VH_tagFirst_Z_dR__5->SetBinError(22,0.008729046);
   VH_tagFirst_Z_dR__5->SetBinError(23,0.00846557);
   VH_tagFirst_Z_dR__5->SetBinError(24,0.00960096);
   VH_tagFirst_Z_dR__5->SetBinError(25,0.01164931);
   VH_tagFirst_Z_dR__5->SetBinError(26,0.007109197);
   VH_tagFirst_Z_dR__5->SetBinError(27,0.0233697);
   VH_tagFirst_Z_dR__5->SetBinError(28,0.01035855);
   VH_tagFirst_Z_dR__5->SetBinError(29,0.009587085);
   VH_tagFirst_Z_dR__5->SetBinError(30,0.007200863);
   VH_tagFirst_Z_dR__5->SetBinError(31,0.01069958);
   VH_tagFirst_Z_dR__5->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__5->SetLineColor(ci);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__5->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR->Modified();
   Z_dR->cd();
   Z_dR->SetSelected(Z_dR);
}
