#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagOnly_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagOnly_18/Aplanarity_ZHcc_tagOnly_18
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagOnly_18 = new TCanvas("Aplanarity_ZHcc_tagOnly_18", "Aplanarity_ZHcc_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagOnly_18->SetHighLightColor(2);
   Aplanarity_ZHcc_tagOnly_18->Range(-0.2,-3.991799,1.133333,1.379928);
   Aplanarity_ZHcc_tagOnly_18->SetFillColor(0);
   Aplanarity_ZHcc_tagOnly_18->SetFillStyle(4000);
   Aplanarity_ZHcc_tagOnly_18->SetBorderMode(0);
   Aplanarity_ZHcc_tagOnly_18->SetBorderSize(2);
   Aplanarity_ZHcc_tagOnly_18->SetLogy();
   Aplanarity_ZHcc_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1173 = new TH1D("VH_tagOnly_Aplanarity__1173","",50,0,1);
   VH_tagOnly_Aplanarity__1173->SetBinContent(1,3.67457);
   VH_tagOnly_Aplanarity__1173->SetBinContent(2,0.3167386);
   VH_tagOnly_Aplanarity__1173->SetBinContent(3,0.0790491);
   VH_tagOnly_Aplanarity__1173->SetBinContent(4,0.0155303);
   VH_tagOnly_Aplanarity__1173->SetBinContent(5,0.007161459);
   VH_tagOnly_Aplanarity__1173->SetBinContent(6,0.002775034);
   VH_tagOnly_Aplanarity__1173->SetBinContent(7,0.006058982);
   VH_tagOnly_Aplanarity__1173->SetBinContent(8,0.007098587);
   VH_tagOnly_Aplanarity__1173->SetBinContent(9,0.001098614);
   VH_tagOnly_Aplanarity__1173->SetBinContent(10,0.0008107704);
   VH_tagOnly_Aplanarity__1173->SetBinContent(12,0.0007021084);
   VH_tagOnly_Aplanarity__1173->SetBinContent(14,0.0008758926);
   VH_tagOnly_Aplanarity__1173->SetBinError(1,0.1025065);
   VH_tagOnly_Aplanarity__1173->SetBinError(2,0.02601188);
   VH_tagOnly_Aplanarity__1173->SetBinError(3,0.01625835);
   VH_tagOnly_Aplanarity__1173->SetBinError(4,0.005877488);
   VH_tagOnly_Aplanarity__1173->SetBinError(5,0.003527689);
   VH_tagOnly_Aplanarity__1173->SetBinError(6,0.001894837);
   VH_tagOnly_Aplanarity__1173->SetBinError(7,0.004310176);
   VH_tagOnly_Aplanarity__1173->SetBinError(8,0.00542725);
   VH_tagOnly_Aplanarity__1173->SetBinError(9,0.0006360448);
   VH_tagOnly_Aplanarity__1173->SetBinError(10,0.0008107704);
   VH_tagOnly_Aplanarity__1173->SetBinError(12,0.0004964887);
   VH_tagOnly_Aplanarity__1173->SetBinError(14,0.0006544837);
   VH_tagOnly_Aplanarity__1173->SetEntries(4239);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1173->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1173->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1173->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1173->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1173->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1173->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1173->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1173->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1173->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1173->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1173->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1173->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1173->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1173->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1173->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1173->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagOnly_18->Modified();
   Aplanarity_ZHcc_tagOnly_18->cd();
   Aplanarity_ZHcc_tagOnly_18->SetSelected(Aplanarity_ZHcc_tagOnly_18);
}
