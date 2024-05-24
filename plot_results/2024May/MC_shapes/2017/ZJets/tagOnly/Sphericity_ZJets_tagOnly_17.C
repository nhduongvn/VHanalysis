#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagOnly_17/Sphericity_ZJets_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagOnly_17 = new TCanvas("Sphericity_ZJets_tagOnly_17", "Sphericity_ZJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagOnly_17->SetHighLightColor(2);
   Sphericity_ZJets_tagOnly_17->Range(-0.2,-530.2522,1.133333,4772.269);
   Sphericity_ZJets_tagOnly_17->SetFillColor(0);
   Sphericity_ZJets_tagOnly_17->SetFillStyle(4000);
   Sphericity_ZJets_tagOnly_17->SetBorderMode(0);
   Sphericity_ZJets_tagOnly_17->SetBorderSize(2);
   Sphericity_ZJets_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_ZJets_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_ZJets_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1154 = new TH1D("VH_tagOnly_Sphericity__1154","",25,0,1);
   VH_tagOnly_Sphericity__1154->SetBinContent(1,4040.016);
   VH_tagOnly_Sphericity__1154->SetBinContent(2,2989.836);
   VH_tagOnly_Sphericity__1154->SetBinContent(3,1698.507);
   VH_tagOnly_Sphericity__1154->SetBinContent(4,1047.869);
   VH_tagOnly_Sphericity__1154->SetBinContent(5,589.7837);
   VH_tagOnly_Sphericity__1154->SetBinContent(6,334.7471);
   VH_tagOnly_Sphericity__1154->SetBinContent(7,180.845);
   VH_tagOnly_Sphericity__1154->SetBinContent(8,106.2908);
   VH_tagOnly_Sphericity__1154->SetBinContent(9,64.80092);
   VH_tagOnly_Sphericity__1154->SetBinContent(10,45.65217);
   VH_tagOnly_Sphericity__1154->SetBinContent(11,34.39306);
   VH_tagOnly_Sphericity__1154->SetBinContent(12,25.87702);
   VH_tagOnly_Sphericity__1154->SetBinContent(13,20.45894);
   VH_tagOnly_Sphericity__1154->SetBinContent(14,16.0163);
   VH_tagOnly_Sphericity__1154->SetBinContent(15,12.47468);
   VH_tagOnly_Sphericity__1154->SetBinContent(16,6.898913);
   VH_tagOnly_Sphericity__1154->SetBinContent(17,10.66673);
   VH_tagOnly_Sphericity__1154->SetBinContent(18,5.695165);
   VH_tagOnly_Sphericity__1154->SetBinContent(19,1.394028);
   VH_tagOnly_Sphericity__1154->SetBinContent(20,1.020408);
   VH_tagOnly_Sphericity__1154->SetBinContent(21,0.1803689);
   VH_tagOnly_Sphericity__1154->SetBinError(1,42.5433);
   VH_tagOnly_Sphericity__1154->SetBinError(2,40.0484);
   VH_tagOnly_Sphericity__1154->SetBinError(3,27.29879);
   VH_tagOnly_Sphericity__1154->SetBinError(4,25.25);
   VH_tagOnly_Sphericity__1154->SetBinError(5,13.95883);
   VH_tagOnly_Sphericity__1154->SetBinError(6,13.64417);
   VH_tagOnly_Sphericity__1154->SetBinError(7,9.445654);
   VH_tagOnly_Sphericity__1154->SetBinError(8,5.337865);
   VH_tagOnly_Sphericity__1154->SetBinError(9,3.890056);
   VH_tagOnly_Sphericity__1154->SetBinError(10,3.168717);
   VH_tagOnly_Sphericity__1154->SetBinError(11,2.602422);
   VH_tagOnly_Sphericity__1154->SetBinError(12,1.951164);
   VH_tagOnly_Sphericity__1154->SetBinError(13,1.925945);
   VH_tagOnly_Sphericity__1154->SetBinError(14,1.651696);
   VH_tagOnly_Sphericity__1154->SetBinError(15,1.300931);
   VH_tagOnly_Sphericity__1154->SetBinError(16,0.9352978);
   VH_tagOnly_Sphericity__1154->SetBinError(17,3.619627);
   VH_tagOnly_Sphericity__1154->SetBinError(18,1.076464);
   VH_tagOnly_Sphericity__1154->SetBinError(19,0.4975192);
   VH_tagOnly_Sphericity__1154->SetBinError(20,0.4042332);
   VH_tagOnly_Sphericity__1154->SetBinError(21,0.1057716);
   VH_tagOnly_Sphericity__1154->SetEntries(88024);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1154->SetLineColor(ci);
   VH_tagOnly_Sphericity__1154->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1154->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1154->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1154->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1154->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1154->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1154->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1154->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1154->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1154->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1154->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1154->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1154->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1154->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1154->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagOnly_17->Modified();
   Sphericity_ZJets_tagOnly_17->cd();
   Sphericity_ZJets_tagOnly_17->SetSelected(Sphericity_ZJets_tagOnly_17);
}
