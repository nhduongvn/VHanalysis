#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagOnly_2b1c_16/Aplanarity_ZHcc_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagOnly_2b1c_16 = new TCanvas("Aplanarity_ZHcc_tagOnly_2b1c_16", "Aplanarity_ZHcc_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZHcc_tagOnly_2b1c_16->Range(-0.2,-0.6416931,1.133333,5.775238);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetFillColor(0);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetBorderMode(0);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetBorderSize(2);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3331 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3331","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(1,4.88909);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(2,0.5176332);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(3,0.1204757);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(4,0.03152836);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(5,0.01499351);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(6,0.003708416);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(7,0.005169992);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(8,0.001640166);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(9,0.0004297189);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(16,0.0002917857);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinContent(17,0.0002685819);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(1,0.08472116);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(2,0.02697237);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(3,0.01277067);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(4,0.006574503);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(5,0.004636699);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(6,0.001897859);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(7,0.002864821);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(8,0.0006440548);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(9,0.0004297189);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(16,0.0002917857);
   VH_tagOnly_2b1c_Aplanarity__3331->SetBinError(17,0.0002685819);
   VH_tagOnly_2b1c_Aplanarity__3331->SetEntries(8571);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3331->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3331->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3331->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3331->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3331->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3331->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3331->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3331->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3331->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3331->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3331->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3331->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3331->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3331->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3331->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3331->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagOnly_2b1c_16->Modified();
   Aplanarity_ZHcc_tagOnly_2b1c_16->cd();
   Aplanarity_ZHcc_tagOnly_2b1c_16->SetSelected(Aplanarity_ZHcc_tagOnly_2b1c_16);
}
