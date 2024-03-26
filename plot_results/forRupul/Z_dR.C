#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR()
{
//=========Macro generated from canvas: Z_dR/Z_dR
//=========  (Tue Mar 26 15:28:34 2024) by ROOT version 6.28/10
   TCanvas *Z_dR = new TCanvas("Z_dR", "Z_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR->SetHighLightColor(2);
   Z_dR->Range(-1.2,-3.443602,6.8,30.99242);
   Z_dR->SetFillColor(0);
   Z_dR->SetBorderMode(0);
   Z_dR->SetBorderSize(2);
   Z_dR->SetLeftMargin(0.15);
   Z_dR->SetFrameBorderMode(0);
   Z_dR->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__5 = new TH1D("VH_tagFirst_Z_dR__5","",30,0,6);
   VH_tagFirst_Z_dR__5->SetBinContent(3,19.5453);
   VH_tagFirst_Z_dR__5->SetBinContent(4,25.11147);
   VH_tagFirst_Z_dR__5->SetBinContent(5,26.23697);
   VH_tagFirst_Z_dR__5->SetBinContent(6,17.9002);
   VH_tagFirst_Z_dR__5->SetBinContent(7,13.38122);
   VH_tagFirst_Z_dR__5->SetBinContent(8,5.021625);
   VH_tagFirst_Z_dR__5->SetBinContent(9,7.044454);
   VH_tagFirst_Z_dR__5->SetBinContent(10,4.54583);
   VH_tagFirst_Z_dR__5->SetBinContent(11,6.048174);
   VH_tagFirst_Z_dR__5->SetBinContent(12,3.630477);
   VH_tagFirst_Z_dR__5->SetBinContent(14,3.277732);
   VH_tagFirst_Z_dR__5->SetBinContent(15,3.352967);
   VH_tagFirst_Z_dR__5->SetBinContent(16,6.953936);
   VH_tagFirst_Z_dR__5->SetBinContent(18,4.647934);
   VH_tagFirst_Z_dR__5->SetBinContent(20,2.055278);
   VH_tagFirst_Z_dR__5->SetBinContent(21,2.504476);
   VH_tagFirst_Z_dR__5->SetBinContent(23,2.869185);
   VH_tagFirst_Z_dR__5->SetBinContent(24,3.749742);
   VH_tagFirst_Z_dR__5->SetBinContent(25,1.179362);
   VH_tagFirst_Z_dR__5->SetBinContent(26,2.114416);
   VH_tagFirst_Z_dR__5->SetBinContent(27,0.7622275);
   VH_tagFirst_Z_dR__5->SetBinContent(28,2.741276);
   VH_tagFirst_Z_dR__5->SetBinContent(29,3.500916);
   VH_tagFirst_Z_dR__5->SetBinContent(30,2.257086);
   VH_tagFirst_Z_dR__5->SetBinError(3,5.621455);
   VH_tagFirst_Z_dR__5->SetBinError(4,6.645795);
   VH_tagFirst_Z_dR__5->SetBinError(5,6.873525);
   VH_tagFirst_Z_dR__5->SetBinError(6,5.422075);
   VH_tagFirst_Z_dR__5->SetBinError(7,4.392989);
   VH_tagFirst_Z_dR__5->SetBinError(8,3.001606);
   VH_tagFirst_Z_dR__5->SetBinError(9,3.3206);
   VH_tagFirst_Z_dR__5->SetBinError(10,2.283365);
   VH_tagFirst_Z_dR__5->SetBinError(11,3.073515);
   VH_tagFirst_Z_dR__5->SetBinError(12,2.320594);
   VH_tagFirst_Z_dR__5->SetBinError(14,1.94586);
   VH_tagFirst_Z_dR__5->SetBinError(15,1.957291);
   VH_tagFirst_Z_dR__5->SetBinError(16,2.906494);
   VH_tagFirst_Z_dR__5->SetBinError(18,2.358358);
   VH_tagFirst_Z_dR__5->SetBinError(20,1.45382);
   VH_tagFirst_Z_dR__5->SetBinError(21,1.789005);
   VH_tagFirst_Z_dR__5->SetBinError(23,2.053538);
   VH_tagFirst_Z_dR__5->SetBinError(24,2.717093);
   VH_tagFirst_Z_dR__5->SetBinError(25,1.179362);
   VH_tagFirst_Z_dR__5->SetBinError(26,1.614942);
   VH_tagFirst_Z_dR__5->SetBinError(27,0.6872585);
   VH_tagFirst_Z_dR__5->SetBinError(28,1.9554);
   VH_tagFirst_Z_dR__5->SetBinError(29,2.572314);
   VH_tagFirst_Z_dR__5->SetBinError(30,1.598093);
   VH_tagFirst_Z_dR__5->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VH_tagFirst_Z_dR__5->SetFillColor(ci);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__5->GetXaxis()->SetRange(1,60);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitle("Events/2 GeV");
   VH_tagFirst_Z_dR__5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, lumi fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR->Modified();
   Z_dR->cd();
   Z_dR->SetSelected(Z_dR);
}
