#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_ZHcc_DHZfirst_2b1c_18/Sphericity_ZHcc_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_DHZfirst_2b1c_18 = new TCanvas("Sphericity_ZHcc_DHZfirst_2b1c_18", "Sphericity_ZHcc_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetHighLightColor(2);
   Sphericity_ZHcc_DHZfirst_2b1c_18->Range(-0.2,-0.07802538,1.133333,0.7022284);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetFillColor(0);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetFillStyle(4000);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetBorderMode(0);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetBorderSize(2);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4023 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4023","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(1,0.5944791);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(2,0.581541);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(3,0.3030309);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(4,0.2529697);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(5,0.14129);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(6,0.06462005);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(7,0.02002898);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(8,0.003307718);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(9,0.0002080776);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(10,0.0007395573);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(11,0.0004327681);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinContent(14,0.0004341104);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(1,0.03552462);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(2,0.03602189);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(3,0.02641219);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(4,0.02462507);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(5,0.01930607);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(6,0.01234731);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(7,0.01050268);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(8,0.002007505);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(9,0.0002080776);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(10,0.000527557);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(11,0.0004327681);
   VH_DHZfirst_2b1c_Sphericity__4023->SetBinError(14,0.0004341104);
   VH_DHZfirst_2b1c_Sphericity__4023->SetEntries(2033);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4023->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4023->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4023->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4023->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4023->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4023->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4023->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4023->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4023->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4023->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4023->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4023->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4023->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4023->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4023->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4023->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_DHZfirst_2b1c_18->Modified();
   Sphericity_ZHcc_DHZfirst_2b1c_18->cd();
   Sphericity_ZHcc_DHZfirst_2b1c_18->SetSelected(Sphericity_ZHcc_DHZfirst_2b1c_18);
}
