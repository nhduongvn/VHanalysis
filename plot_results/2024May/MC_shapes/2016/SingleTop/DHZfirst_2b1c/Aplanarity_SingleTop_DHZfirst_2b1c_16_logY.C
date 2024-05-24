#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_DHZfirst_2b1c_16/Aplanarity_SingleTop_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_SingleTop_DHZfirst_2b1c_16", "Aplanarity_SingleTop_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->Range(-0.2,-2.472494,1.133333,4.952161);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetLogy();
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4069 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4069","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(1,8553.547);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(2,1239.714);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(3,274.4807);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(4,76.39324);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(5,21.78857);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(6,7.179912);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(7,4.611021);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(8,2.292879);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(9,0.9950706);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(10,0.4988069);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(11,0.3388551);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(12,0.1001014);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(13,0.2536443);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(14,0.03723929);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinContent(15,0.04011227);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(1,32.27266);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(2,11.98487);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(3,5.623708);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(4,3.006228);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(5,1.590907);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(6,0.9732396);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(7,0.7826182);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(8,0.5517593);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(9,0.4024174);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(10,0.2197795);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(11,0.2241552);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(12,0.05799613);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(13,0.1998444);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(14,0.03723929);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetBinError(15,0.04011227);
   VH_DHZfirst_2b1c_Aplanarity__4069->SetEntries(184089);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4069->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4069->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4069->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4069->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4069->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_DHZfirst_2b1c_16->Modified();
   Aplanarity_SingleTop_DHZfirst_2b1c_16->cd();
   Aplanarity_SingleTop_DHZfirst_2b1c_16->SetSelected(Aplanarity_SingleTop_DHZfirst_2b1c_16);
}
