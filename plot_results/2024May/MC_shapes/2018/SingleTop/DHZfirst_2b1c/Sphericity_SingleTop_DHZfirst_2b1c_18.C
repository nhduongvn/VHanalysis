#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_SingleTop_DHZfirst_2b1c_18/Sphericity_SingleTop_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_DHZfirst_2b1c_18 = new TCanvas("Sphericity_SingleTop_DHZfirst_2b1c_18", "Sphericity_SingleTop_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetHighLightColor(2);
   Sphericity_SingleTop_DHZfirst_2b1c_18->Range(-0.2,-562.509,1.133333,5062.58);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetFillColor(0);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetFillStyle(4000);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetBorderMode(0);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetBorderSize(2);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4041 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4041","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(1,4285.782);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(2,3983.159);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(3,2300.766);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(4,1296.619);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(5,646.0511);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(6,300.7381);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(7,118.6163);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(8,46.90564);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(9,16.35765);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(10,13.47132);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(11,7.97394);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(12,4.491102);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(13,3.280948);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(14,1.113909);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(15,2.151803);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(16,1.582513);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(17,1.16582);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(18,0.8271085);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinContent(19,0.2032145);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(1,38.94783);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(2,37.78415);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(3,35.25764);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(4,22.89565);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(5,14.99651);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(6,11.22722);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(7,6.547383);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(8,4.02479);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(9,2.135167);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(10,2.395121);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(11,1.881393);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(12,1.295513);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(13,0.9763995);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(14,0.4053093);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(15,0.8946723);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(16,0.7320137);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(17,0.5022348);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(18,0.4360487);
   VH_DHZfirst_2b1c_Sphericity__4041->SetBinError(19,0.1571664);
   VH_DHZfirst_2b1c_Sphericity__4041->SetEntries(101708);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4041->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4041->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4041->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4041->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4041->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4041->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4041->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4041->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4041->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4041->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4041->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4041->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4041->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4041->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4041->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4041->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_DHZfirst_2b1c_18->Modified();
   Sphericity_SingleTop_DHZfirst_2b1c_18->cd();
   Sphericity_SingleTop_DHZfirst_2b1c_18->SetSelected(Sphericity_SingleTop_DHZfirst_2b1c_18);
}
