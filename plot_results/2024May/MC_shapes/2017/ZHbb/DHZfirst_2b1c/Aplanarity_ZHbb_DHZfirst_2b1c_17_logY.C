#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_DHZfirst_2b1c_17/Aplanarity_ZHbb_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_ZHbb_DHZfirst_2b1c_17", "Aplanarity_ZHbb_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->Range(-0.2,-4.774879,1.133333,2.848012);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetLogy();
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4055 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4055","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(1,64.29455);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(2,5.46575);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(3,0.904751);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(4,0.1725982);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(5,0.03919865);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(6,0.01301019);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(7,0.001766249);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(8,0.002620057);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(9,0.0004769691);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(10,0.0001942855);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinContent(12,0.0002476312);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(1,0.3074461);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(2,0.08482722);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(3,0.03575102);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(4,0.01495435);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(5,0.006830338);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(6,0.003880552);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(7,0.0007389686);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(8,0.001289435);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(9,0.0003372871);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(10,0.0001942855);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetBinError(12,0.0002476312);
   VH_DHZfirst_2b1c_Aplanarity__4055->SetEntries(114553);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4055->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4055->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4055->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4055->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4055->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_DHZfirst_2b1c_17->Modified();
   Aplanarity_ZHbb_DHZfirst_2b1c_17->cd();
   Aplanarity_ZHbb_DHZfirst_2b1c_17->SetSelected(Aplanarity_ZHbb_DHZfirst_2b1c_17);
}
