#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_DHZfirst_16/Aplanarity_ZHbb_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_DHZfirst_16 = new TCanvas("Aplanarity_ZHbb_DHZfirst_16", "Aplanarity_ZHbb_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_ZHbb_DHZfirst_16->Range(-0.2,-4.175909,1.133333,2.134048);
   Aplanarity_ZHbb_DHZfirst_16->SetFillColor(0);
   Aplanarity_ZHbb_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_ZHbb_DHZfirst_16->SetBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_16->SetBorderSize(2);
   Aplanarity_ZHbb_DHZfirst_16->SetLogy();
   Aplanarity_ZHbb_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1894 = new TH1D("VH_DHZfirst_Aplanarity__1894","",50,0,1);
   VH_DHZfirst_Aplanarity__1894->SetBinContent(1,16.8075);
   VH_DHZfirst_Aplanarity__1894->SetBinContent(2,1.370184);
   VH_DHZfirst_Aplanarity__1894->SetBinContent(3,0.2167641);
   VH_DHZfirst_Aplanarity__1894->SetBinContent(4,0.04539067);
   VH_DHZfirst_Aplanarity__1894->SetBinContent(5,0.01034733);
   VH_DHZfirst_Aplanarity__1894->SetBinContent(6,0.005084549);
   VH_DHZfirst_Aplanarity__1894->SetBinContent(7,0.0005703174);
   VH_DHZfirst_Aplanarity__1894->SetBinContent(8,0.002917125);
   VH_DHZfirst_Aplanarity__1894->SetBinError(1,0.1215392);
   VH_DHZfirst_Aplanarity__1894->SetBinError(2,0.03341551);
   VH_DHZfirst_Aplanarity__1894->SetBinError(3,0.01324488);
   VH_DHZfirst_Aplanarity__1894->SetBinError(4,0.005878658);
   VH_DHZfirst_Aplanarity__1894->SetBinError(5,0.003065817);
   VH_DHZfirst_Aplanarity__1894->SetBinError(6,0.002031405);
   VH_DHZfirst_Aplanarity__1894->SetBinError(7,0.0004034712);
   VH_DHZfirst_Aplanarity__1894->SetBinError(8,0.001685004);
   VH_DHZfirst_Aplanarity__1894->SetEntries(30046);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1894->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1894->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1894->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1894->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1894->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1894->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1894->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1894->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1894->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1894->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1894->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1894->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1894->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1894->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1894->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1894->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_DHZfirst_16->Modified();
   Aplanarity_ZHbb_DHZfirst_16->cd();
   Aplanarity_ZHbb_DHZfirst_16->SetSelected(Aplanarity_ZHbb_DHZfirst_16);
}
