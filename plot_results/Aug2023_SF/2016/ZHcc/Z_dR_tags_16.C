#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-0.001444629,6.8,0.01300166);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__74 = new TH1D("VbbHcc_tags_Z_dR__74","",30,0,6);
   VbbHcc_tags_Z_dR__74->SetBinContent(3,0.00771472);
   VbbHcc_tags_Z_dR__74->SetBinContent(4,0.008213112);
   VbbHcc_tags_Z_dR__74->SetBinContent(5,0.006957173);
   VbbHcc_tags_Z_dR__74->SetBinContent(6,0.01100669);
   VbbHcc_tags_Z_dR__74->SetBinContent(7,0.004960734);
   VbbHcc_tags_Z_dR__74->SetBinContent(9,0.004772245);
   VbbHcc_tags_Z_dR__74->SetBinContent(10,0.001871144);
   VbbHcc_tags_Z_dR__74->SetBinContent(11,0.003838941);
   VbbHcc_tags_Z_dR__74->SetBinContent(12,0.002338156);
   VbbHcc_tags_Z_dR__74->SetBinContent(14,0.002370096);
   VbbHcc_tags_Z_dR__74->SetBinContent(15,0.00624782);
   VbbHcc_tags_Z_dR__74->SetBinContent(16,0.001425773);
   VbbHcc_tags_Z_dR__74->SetBinContent(17,0.003762308);
   VbbHcc_tags_Z_dR__74->SetBinContent(18,0.002570627);
   VbbHcc_tags_Z_dR__74->SetBinContent(19,0.001918567);
   VbbHcc_tags_Z_dR__74->SetBinContent(23,0.00204855);
   VbbHcc_tags_Z_dR__74->SetBinContent(29,0.007344379);
   VbbHcc_tags_Z_dR__74->SetBinError(3,0.004491539);
   VbbHcc_tags_Z_dR__74->SetBinError(4,0.004119157);
   VbbHcc_tags_Z_dR__74->SetBinError(5,0.004158659);
   VbbHcc_tags_Z_dR__74->SetBinError(6,0.005043623);
   VbbHcc_tags_Z_dR__74->SetBinError(7,0.00351737);
   VbbHcc_tags_Z_dR__74->SetBinError(9,0.003483053);
   VbbHcc_tags_Z_dR__74->SetBinError(10,0.001871144);
   VbbHcc_tags_Z_dR__74->SetBinError(11,0.00273162);
   VbbHcc_tags_Z_dR__74->SetBinError(12,0.002338156);
   VbbHcc_tags_Z_dR__74->SetBinError(14,0.002370096);
   VbbHcc_tags_Z_dR__74->SetBinError(15,0.003611406);
   VbbHcc_tags_Z_dR__74->SetBinError(16,0.001425773);
   VbbHcc_tags_Z_dR__74->SetBinError(17,0.002705336);
   VbbHcc_tags_Z_dR__74->SetBinError(18,0.002570627);
   VbbHcc_tags_Z_dR__74->SetBinError(19,0.001918567);
   VbbHcc_tags_Z_dR__74->SetBinError(23,0.00204855);
   VbbHcc_tags_Z_dR__74->SetBinError(29,0.004242506);
   VbbHcc_tags_Z_dR__74->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR__74->SetFillColor(ci);
   VbbHcc_tags_Z_dR__74->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__74->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__74->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__74->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__74->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__74->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__74->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__74->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__74->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__74->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__74->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
