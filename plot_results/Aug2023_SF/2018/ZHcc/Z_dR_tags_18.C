#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-0.004414058,6.8,0.03972652);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__74 = new TH1D("VbbHcc_tags_Z_dR__74","",30,0,6);
   VbbHcc_tags_Z_dR__74->SetBinContent(3,0.02835823);
   VbbHcc_tags_Z_dR__74->SetBinContent(4,0.03363092);
   VbbHcc_tags_Z_dR__74->SetBinContent(5,0.02811128);
   VbbHcc_tags_Z_dR__74->SetBinContent(6,0.009135977);
   VbbHcc_tags_Z_dR__74->SetBinContent(7,0.007824098);
   VbbHcc_tags_Z_dR__74->SetBinContent(8,0.004162948);
   VbbHcc_tags_Z_dR__74->SetBinContent(9,0.001935528);
   VbbHcc_tags_Z_dR__74->SetBinContent(11,0.004926638);
   VbbHcc_tags_Z_dR__74->SetBinContent(12,0.003832011);
   VbbHcc_tags_Z_dR__74->SetBinContent(13,0.002299241);
   VbbHcc_tags_Z_dR__74->SetBinContent(14,0.01591678);
   VbbHcc_tags_Z_dR__74->SetBinContent(15,0.006205511);
   VbbHcc_tags_Z_dR__74->SetBinContent(16,0.00509696);
   VbbHcc_tags_Z_dR__74->SetBinContent(17,0.006113492);
   VbbHcc_tags_Z_dR__74->SetBinContent(18,0.001804901);
   VbbHcc_tags_Z_dR__74->SetBinContent(19,0.009039455);
   VbbHcc_tags_Z_dR__74->SetBinContent(20,0.007416673);
   VbbHcc_tags_Z_dR__74->SetBinContent(22,0.003177978);
   VbbHcc_tags_Z_dR__74->SetBinContent(23,0.00780307);
   VbbHcc_tags_Z_dR__74->SetBinContent(27,0.002052644);
   VbbHcc_tags_Z_dR__74->SetBinContent(29,0.003673684);
   VbbHcc_tags_Z_dR__74->SetBinError(3,0.008418302);
   VbbHcc_tags_Z_dR__74->SetBinError(4,0.009750469);
   VbbHcc_tags_Z_dR__74->SetBinError(5,0.00976633);
   VbbHcc_tags_Z_dR__74->SetBinError(6,0.004350075);
   VbbHcc_tags_Z_dR__74->SetBinError(7,0.004536569);
   VbbHcc_tags_Z_dR__74->SetBinError(8,0.002944481);
   VbbHcc_tags_Z_dR__74->SetBinError(9,0.001935528);
   VbbHcc_tags_Z_dR__74->SetBinError(11,0.003549907);
   VbbHcc_tags_Z_dR__74->SetBinError(12,0.00272864);
   VbbHcc_tags_Z_dR__74->SetBinError(13,0.002299241);
   VbbHcc_tags_Z_dR__74->SetBinError(14,0.007354758);
   VbbHcc_tags_Z_dR__74->SetBinError(15,0.003638941);
   VbbHcc_tags_Z_dR__74->SetBinError(16,0.003681301);
   VbbHcc_tags_Z_dR__74->SetBinError(17,0.004355013);
   VbbHcc_tags_Z_dR__74->SetBinError(18,0.001804901);
   VbbHcc_tags_Z_dR__74->SetBinError(19,0.004639864);
   VbbHcc_tags_Z_dR__74->SetBinError(20,0.004411705);
   VbbHcc_tags_Z_dR__74->SetBinError(22,0.003177978);
   VbbHcc_tags_Z_dR__74->SetBinError(23,0.004507133);
   VbbHcc_tags_Z_dR__74->SetBinError(27,0.002052644);
   VbbHcc_tags_Z_dR__74->SetBinError(29,0.003673684);
   VbbHcc_tags_Z_dR__74->SetEntries(77);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
