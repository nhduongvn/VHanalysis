#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_SingleTop_DHZfirst_2b1c_17/Sphericity_SingleTop_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_DHZfirst_2b1c_17 = new TCanvas("Sphericity_SingleTop_DHZfirst_2b1c_17", "Sphericity_SingleTop_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_SingleTop_DHZfirst_2b1c_17->Range(-0.2,-3.01963,1.133333,4.3032);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetLogy();
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4040 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4040","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(1,1965.026);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(2,1821.102);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(3,1037.235);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(4,566.9208);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(5,290.6575);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(6,128.9332);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(7,47.46066);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(8,20.65871);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(9,9.507622);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(10,5.151179);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(11,3.629068);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(12,1.969304);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(13,0.6387771);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(14,0.8115949);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(15,0.5920495);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(16,0.5942686);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(17,0.6941903);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(18,0.06962209);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(19,0.154038);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinContent(20,0.01032008);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(1,18.55579);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(2,17.98401);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(3,13.7589);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(4,10.37421);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(5,7.803279);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(6,5.019218);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(7,3.212557);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(8,2.014512);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(9,1.257795);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(10,1.232484);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(11,1.131491);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(12,0.497745);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(13,0.1756248);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(14,0.3091905);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(15,0.206089);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(16,0.2684254);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(17,0.3771558);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(18,0.03962291);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(19,0.07137061);
   VH_DHZfirst_2b1c_Sphericity__4040->SetBinError(20,0.01032008);
   VH_DHZfirst_2b1c_Sphericity__4040->SetEntries(83173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4040->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4040->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4040->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4040->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4040->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4040->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4040->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4040->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4040->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4040->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4040->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4040->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4040->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4040->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4040->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4040->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_DHZfirst_2b1c_17->Modified();
   Sphericity_SingleTop_DHZfirst_2b1c_17->cd();
   Sphericity_SingleTop_DHZfirst_2b1c_17->SetSelected(Sphericity_SingleTop_DHZfirst_2b1c_17);
}
