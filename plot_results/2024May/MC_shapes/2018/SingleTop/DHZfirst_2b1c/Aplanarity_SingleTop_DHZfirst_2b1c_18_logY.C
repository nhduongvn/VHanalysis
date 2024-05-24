#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_DHZfirst_2b1c_18/Aplanarity_SingleTop_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_SingleTop_DHZfirst_2b1c_18", "Aplanarity_SingleTop_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->Range(-0.2,-2.492989,1.133333,5.080301);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetLogy();
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4071 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4071","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(1,11102.56);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(2,1479.655);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(3,316.7353);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(4,97.16608);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(5,18.98796);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(6,8.285046);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(7,3.582541);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(8,2.225057);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(9,1.061263);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(10,0.03675954);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(11,0.1629119);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(12,0.3502586);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinContent(13,0.4453187);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(1,66.61038);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(2,23.44275);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(3,10.06854);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(4,6.506014);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(5,2.293558);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(6,1.643129);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(7,0.9676015);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(8,0.8012421);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(9,0.5871354);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(10,0.03675954);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(11,0.09414503);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(12,0.2721855);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetBinError(13,0.3973085);
   VH_DHZfirst_2b1c_Aplanarity__4071->SetEntries(101708);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4071->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4071->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4071->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4071->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4071->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_DHZfirst_2b1c_18->Modified();
   Aplanarity_SingleTop_DHZfirst_2b1c_18->cd();
   Aplanarity_SingleTop_DHZfirst_2b1c_18->SetSelected(Aplanarity_SingleTop_DHZfirst_2b1c_18);
}
