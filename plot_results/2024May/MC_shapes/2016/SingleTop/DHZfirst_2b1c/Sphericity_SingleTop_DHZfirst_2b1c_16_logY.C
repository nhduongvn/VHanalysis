#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_SingleTop_DHZfirst_2b1c_16/Sphericity_SingleTop_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_DHZfirst_2b1c_16 = new TCanvas("Sphericity_SingleTop_DHZfirst_2b1c_16", "Sphericity_SingleTop_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_SingleTop_DHZfirst_2b1c_16->Range(-0.2,-2.74207,1.133333,4.523879);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetLogy();
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4039 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4039","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(1,3309.29);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(2,3197.735);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(3,1823.76);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(4,980.303);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(5,490.4992);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(6,220.8233);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(7,82.57599);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(8,32.89377);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(9,18.57666);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(10,9.586223);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(11,5.21574);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(12,3.291793);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(13,2.046617);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(14,1.353066);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(15,1.088526);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(16,0.8408076);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(17,1.272212);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(18,0.6511186);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(19,0.4493722);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinContent(20,0.01929987);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(1,19.85483);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(2,19.192);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(3,14.83281);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(4,11.24759);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(5,8.194805);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(6,5.668404);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(7,3.44495);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(8,2.090552);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(9,1.615165);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(10,1.130065);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(11,0.7994365);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(12,0.653674);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(13,0.5186351);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(14,0.3971027);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(15,0.3293141);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(16,0.3087058);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(17,0.4072127);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(18,0.3386495);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(19,0.2686155);
   VH_DHZfirst_2b1c_Sphericity__4039->SetBinError(20,0.01929987);
   VH_DHZfirst_2b1c_Sphericity__4039->SetEntries(184089);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4039->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4039->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4039->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4039->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4039->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4039->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4039->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4039->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4039->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4039->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4039->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4039->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4039->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4039->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4039->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4039->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_DHZfirst_2b1c_16->Modified();
   Sphericity_SingleTop_DHZfirst_2b1c_16->cd();
   Sphericity_SingleTop_DHZfirst_2b1c_16->SetSelected(Sphericity_SingleTop_DHZfirst_2b1c_16);
}
