#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR()
{
//=========Macro generated from canvas: H_dR/H_dR
//=========  (Fri Mar 29 15:50:00 2024) by ROOT version 6.28/10
   TCanvas *H_dR = new TCanvas("H_dR", "H_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR->SetHighLightColor(2);
   H_dR->Range(-1.24,-0.3337595,7.026667,3.003835);
   H_dR->SetFillColor(0);
   H_dR->SetFillStyle(4000);
   H_dR->SetBorderMode(0);
   H_dR->SetBorderSize(2);
   H_dR->SetLeftMargin(0.15);
   H_dR->SetFrameFillStyle(1000);
   H_dR->SetFrameBorderMode(0);
   H_dR->SetFrameFillStyle(1000);
   H_dR->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_H_dR__6 = new TH1D("VH_MCjet_ideal_H_dR__6","",30,0,6);
   VH_MCjet_ideal_H_dR__6->SetBinContent(3,0.4805564);
   VH_MCjet_ideal_H_dR__6->SetBinContent(4,1.46214);
   VH_MCjet_ideal_H_dR__6->SetBinContent(5,2.063335);
   VH_MCjet_ideal_H_dR__6->SetBinContent(6,2.542929);
   VH_MCjet_ideal_H_dR__6->SetBinContent(7,2.222335);
   VH_MCjet_ideal_H_dR__6->SetBinContent(8,1.686554);
   VH_MCjet_ideal_H_dR__6->SetBinContent(9,1.22107);
   VH_MCjet_ideal_H_dR__6->SetBinContent(10,0.6853604);
   VH_MCjet_ideal_H_dR__6->SetBinContent(11,0.4596351);
   VH_MCjet_ideal_H_dR__6->SetBinContent(12,0.3232513);
   VH_MCjet_ideal_H_dR__6->SetBinContent(13,0.270042);
   VH_MCjet_ideal_H_dR__6->SetBinContent(14,0.1870827);
   VH_MCjet_ideal_H_dR__6->SetBinContent(15,0.2058235);
   VH_MCjet_ideal_H_dR__6->SetBinContent(16,0.1573975);
   VH_MCjet_ideal_H_dR__6->SetBinContent(17,0.04899261);
   VH_MCjet_ideal_H_dR__6->SetBinContent(18,0.01876905);
   VH_MCjet_ideal_H_dR__6->SetBinContent(19,0.02647839);
   VH_MCjet_ideal_H_dR__6->SetBinContent(20,0.004357907);
   VH_MCjet_ideal_H_dR__6->SetBinContent(21,0.005164117);
   VH_MCjet_ideal_H_dR__6->SetBinContent(22,0.006841126);
   VH_MCjet_ideal_H_dR__6->SetBinContent(23,0.00249314);
   VH_MCjet_ideal_H_dR__6->SetBinContent(28,0.001473026);
   VH_MCjet_ideal_H_dR__6->SetBinError(3,0.03916488);
   VH_MCjet_ideal_H_dR__6->SetBinError(4,0.07462362);
   VH_MCjet_ideal_H_dR__6->SetBinError(5,0.08538472);
   VH_MCjet_ideal_H_dR__6->SetBinError(6,0.09580626);
   VH_MCjet_ideal_H_dR__6->SetBinError(7,0.0817307);
   VH_MCjet_ideal_H_dR__6->SetBinError(8,0.06844322);
   VH_MCjet_ideal_H_dR__6->SetBinError(9,0.0714356);
   VH_MCjet_ideal_H_dR__6->SetBinError(10,0.04068501);
   VH_MCjet_ideal_H_dR__6->SetBinError(11,0.03518547);
   VH_MCjet_ideal_H_dR__6->SetBinError(12,0.03220063);
   VH_MCjet_ideal_H_dR__6->SetBinError(13,0.02880958);
   VH_MCjet_ideal_H_dR__6->SetBinError(14,0.02428984);
   VH_MCjet_ideal_H_dR__6->SetBinError(15,0.02479957);
   VH_MCjet_ideal_H_dR__6->SetBinError(16,0.02591644);
   VH_MCjet_ideal_H_dR__6->SetBinError(17,0.01279442);
   VH_MCjet_ideal_H_dR__6->SetBinError(18,0.007742571);
   VH_MCjet_ideal_H_dR__6->SetBinError(19,0.00971018);
   VH_MCjet_ideal_H_dR__6->SetBinError(20,0.00308226);
   VH_MCjet_ideal_H_dR__6->SetBinError(21,0.003682613);
   VH_MCjet_ideal_H_dR__6->SetBinError(22,0.005242599);
   VH_MCjet_ideal_H_dR__6->SetBinError(23,0.00249314);
   VH_MCjet_ideal_H_dR__6->SetBinError(28,0.001473026);
   VH_MCjet_ideal_H_dR__6->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_H_dR__6->SetLineColor(ci);
   VH_MCjet_ideal_H_dR__6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_MCjet_ideal_H_dR__6->GetXaxis()->SetRange(1,31);
   VH_MCjet_ideal_H_dR__6->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_dR__6->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_H_dR__6->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_dR__6->GetYaxis()->SetTitle("Events/0.2");
   VH_MCjet_ideal_H_dR__6->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_dR__6->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_H_dR__6->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_H_dR__6->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_H_dR__6->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_dR__6->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_dR__6->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_H_dR__6->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_dR__6->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR->Modified();
   H_dR->cd();
   H_dR->SetSelected(H_dR);
}
