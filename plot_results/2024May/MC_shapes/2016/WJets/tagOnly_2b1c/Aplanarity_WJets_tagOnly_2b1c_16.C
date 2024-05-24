#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_WJets_tagOnly_2b1c_16/Aplanarity_WJets_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_tagOnly_2b1c_16 = new TCanvas("Aplanarity_WJets_tagOnly_2b1c_16", "Aplanarity_WJets_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_tagOnly_2b1c_16->SetHighLightColor(2);
   Aplanarity_WJets_tagOnly_2b1c_16->Range(-0.2,-3413.185,1.133333,30718.66);
   Aplanarity_WJets_tagOnly_2b1c_16->SetFillColor(0);
   Aplanarity_WJets_tagOnly_2b1c_16->SetFillStyle(4000);
   Aplanarity_WJets_tagOnly_2b1c_16->SetBorderMode(0);
   Aplanarity_WJets_tagOnly_2b1c_16->SetBorderSize(2);
   Aplanarity_WJets_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3340 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3340","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(1,26005.22);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(2,3022.435);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(3,737.1689);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(4,208.8953);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(5,86.50093);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(6,48.3734);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(7,38.68635);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(8,11.1812);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(9,4.402567);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(10,4.054059);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(11,1.594957);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(12,1.651211);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(13,0.518551);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(14,0.3375523);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(15,0.4738649);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(16,0.04067127);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(18,0.04899283);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(20,0.1187145);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinContent(21,0.06642157);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(1,167.3154);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(2,67.31465);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(3,34.86452);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(4,16.91245);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(5,10.30411);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(6,8.045986);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(7,9.783636);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(8,2.12709);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(9,0.877446);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(10,1.57896);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(11,0.3683658);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(12,0.5870162);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(13,0.2070742);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(14,0.3373355);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(15,0.2469053);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(16,0.04031495);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(18,0.04899283);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(20,0.09043222);
   VH_tagOnly_2b1c_Aplanarity__3340->SetBinError(21,0.06642157);
   VH_tagOnly_2b1c_Aplanarity__3340->SetEntries(274175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3340->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3340->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3340->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3340->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3340->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3340->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3340->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3340->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3340->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3340->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3340->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3340->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3340->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3340->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3340->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3340->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_tagOnly_2b1c_16->Modified();
   Aplanarity_WJets_tagOnly_2b1c_16->cd();
   Aplanarity_WJets_tagOnly_2b1c_16->SetSelected(Aplanarity_WJets_tagOnly_2b1c_16);
}
