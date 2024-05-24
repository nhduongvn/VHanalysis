#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_DHZfirst_2b1c_16/Aplanarity_ZHcc_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_ZHcc_DHZfirst_2b1c_16", "Aplanarity_ZHcc_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->Range(-0.2,-4.5116,1.133333,0.9547598);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetLogy();
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4051 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4051","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinContent(1,1.35075);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinContent(2,0.1344186);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinContent(3,0.009756452);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinContent(4,0.001634082);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinContent(5,0.0002168032);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinContent(6,0.0008657702);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinError(1,0.04497006);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinError(2,0.0144185);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinError(3,0.003404917);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinError(4,0.0006780856);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinError(5,0.0002168032);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetBinError(6,0.0005046303);
   VH_DHZfirst_2b1c_Aplanarity__4051->SetEntries(2172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4051->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4051->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4051->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4051->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4051->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_DHZfirst_2b1c_16->Modified();
   Aplanarity_ZHcc_DHZfirst_2b1c_16->cd();
   Aplanarity_ZHcc_DHZfirst_2b1c_16->SetSelected(Aplanarity_ZHcc_DHZfirst_2b1c_16);
}
