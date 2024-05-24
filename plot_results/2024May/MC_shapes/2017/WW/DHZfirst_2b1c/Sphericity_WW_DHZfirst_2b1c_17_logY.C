#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_WW_DHZfirst_2b1c_17/Sphericity_WW_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_DHZfirst_2b1c_17 = new TCanvas("Sphericity_WW_DHZfirst_2b1c_17", "Sphericity_WW_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_WW_DHZfirst_2b1c_17->Range(-0.2,-0.9304665,1.133333,1.398442);
   Sphericity_WW_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_WW_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_WW_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_WW_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_WW_DHZfirst_2b1c_17->SetLogy();
   Sphericity_WW_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4043 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4043","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinContent(1,6.752968);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinContent(2,7.726845);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinContent(3,3.593831);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinContent(4,1.365522);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinContent(5,1.136322);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinContent(6,0.4012863);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinError(1,1.416251);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinError(2,1.528186);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinError(3,1.06372);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinError(4,0.5709324);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinError(5,0.7758869);
   VH_DHZfirst_2b1c_Sphericity__4043->SetBinError(6,0.2926728);
   VH_DHZfirst_2b1c_Sphericity__4043->SetEntries(80);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4043->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4043->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4043->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4043->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4043->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4043->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4043->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4043->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4043->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4043->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4043->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4043->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4043->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4043->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4043->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4043->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_DHZfirst_2b1c_17->Modified();
   Sphericity_WW_DHZfirst_2b1c_17->cd();
   Sphericity_WW_DHZfirst_2b1c_17->SetSelected(Sphericity_WW_DHZfirst_2b1c_17);
}
