#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_DHZfirst_2b1c_18/Aplanarity_QCD_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_QCD_DHZfirst_2b1c_18", "Aplanarity_QCD_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_QCD_DHZfirst_2b1c_18->Range(-0.2,0.7492933,1.133333,7.083676);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetLogy();
   Aplanarity_QCD_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4059 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4059","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinContent(1,1488295);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinContent(2,171653.3);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinContent(3,40511.75);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinContent(4,7103.301);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinContent(5,2010.239);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinContent(6,371.2198);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinContent(7,143.6166);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinContent(8,48.27937);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinError(1,27891.94);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinError(2,10078.03);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinError(3,5668.493);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinError(4,1739.609);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinError(5,870.9747);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinError(6,152.7483);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinError(7,68.47754);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetBinError(8,34.42902);
   VH_DHZfirst_2b1c_Aplanarity__4059->SetEntries(45796);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4059->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4059->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4059->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4059->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4059->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_DHZfirst_2b1c_18->Modified();
   Aplanarity_QCD_DHZfirst_2b1c_18->cd();
   Aplanarity_QCD_DHZfirst_2b1c_18->SetSelected(Aplanarity_QCD_DHZfirst_2b1c_18);
}
