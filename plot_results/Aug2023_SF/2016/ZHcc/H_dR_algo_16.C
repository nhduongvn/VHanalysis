#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Fri Sep  1 13:23:37 2023) by ROOT version 6.28/04
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.2,-0.008621614,6.8,0.07759452);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLeftMargin(0.15);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR__449 = new TH1D("VbbHcc_algo_H_dR__449","",30,0,6);
   VbbHcc_algo_H_dR__449->SetBinContent(3,0.02830385);
   VbbHcc_algo_H_dR__449->SetBinContent(4,0.06005483);
   VbbHcc_algo_H_dR__449->SetBinContent(5,0.06568848);
   VbbHcc_algo_H_dR__449->SetBinContent(6,0.0357909);
   VbbHcc_algo_H_dR__449->SetBinContent(7,0.04680595);
   VbbHcc_algo_H_dR__449->SetBinContent(8,0.03531885);
   VbbHcc_algo_H_dR__449->SetBinContent(9,0.02137414);
   VbbHcc_algo_H_dR__449->SetBinContent(10,0.03354375);
   VbbHcc_algo_H_dR__449->SetBinContent(11,0.02634705);
   VbbHcc_algo_H_dR__449->SetBinContent(12,0.03620118);
   VbbHcc_algo_H_dR__449->SetBinContent(13,0.05279642);
   VbbHcc_algo_H_dR__449->SetBinContent(14,0.02563577);
   VbbHcc_algo_H_dR__449->SetBinContent(15,0.03910146);
   VbbHcc_algo_H_dR__449->SetBinContent(16,0.03058967);
   VbbHcc_algo_H_dR__449->SetBinContent(17,0.01412458);
   VbbHcc_algo_H_dR__449->SetBinContent(18,0.03794059);
   VbbHcc_algo_H_dR__449->SetBinContent(19,0.03843349);
   VbbHcc_algo_H_dR__449->SetBinContent(20,0.02285882);
   VbbHcc_algo_H_dR__449->SetBinContent(21,0.0161213);
   VbbHcc_algo_H_dR__449->SetBinContent(22,0.01228116);
   VbbHcc_algo_H_dR__449->SetBinContent(23,0.01783929);
   VbbHcc_algo_H_dR__449->SetBinContent(24,0.00850827);
   VbbHcc_algo_H_dR__449->SetBinContent(25,0.00215793);
   VbbHcc_algo_H_dR__449->SetBinContent(26,0.009799292);
   VbbHcc_algo_H_dR__449->SetBinContent(27,0.007078103);
   VbbHcc_algo_H_dR__449->SetBinContent(28,0.01030857);
   VbbHcc_algo_H_dR__449->SetBinContent(29,0.01756248);
   VbbHcc_algo_H_dR__449->SetBinContent(31,0.00668686);
   VbbHcc_algo_H_dR__449->SetBinError(3,0.00791604);
   VbbHcc_algo_H_dR__449->SetBinError(4,0.0117163);
   VbbHcc_algo_H_dR__449->SetBinError(5,0.01282332);
   VbbHcc_algo_H_dR__449->SetBinError(6,0.009979774);
   VbbHcc_algo_H_dR__449->SetBinError(7,0.009675399);
   VbbHcc_algo_H_dR__449->SetBinError(8,0.008517489);
   VbbHcc_algo_H_dR__449->SetBinError(9,0.006844864);
   VbbHcc_algo_H_dR__449->SetBinError(10,0.008518471);
   VbbHcc_algo_H_dR__449->SetBinError(11,0.007368936);
   VbbHcc_algo_H_dR__449->SetBinError(12,0.008917806);
   VbbHcc_algo_H_dR__449->SetBinError(13,0.01090503);
   VbbHcc_algo_H_dR__449->SetBinError(14,0.007362926);
   VbbHcc_algo_H_dR__449->SetBinError(15,0.009138969);
   VbbHcc_algo_H_dR__449->SetBinError(16,0.008271483);
   VbbHcc_algo_H_dR__449->SetBinError(17,0.005499941);
   VbbHcc_algo_H_dR__449->SetBinError(18,0.009327676);
   VbbHcc_algo_H_dR__449->SetBinError(19,0.009428761);
   VbbHcc_algo_H_dR__449->SetBinError(20,0.007288193);
   VbbHcc_algo_H_dR__449->SetBinError(21,0.005739126);
   VbbHcc_algo_H_dR__449->SetBinError(22,0.005059198);
   VbbHcc_algo_H_dR__449->SetBinError(23,0.006018708);
   VbbHcc_algo_H_dR__449->SetBinError(24,0.004255166);
   VbbHcc_algo_H_dR__449->SetBinError(25,0.00215793);
   VbbHcc_algo_H_dR__449->SetBinError(26,0.004559392);
   VbbHcc_algo_H_dR__449->SetBinError(27,0.003602686);
   VbbHcc_algo_H_dR__449->SetBinError(28,0.004537948);
   VbbHcc_algo_H_dR__449->SetBinError(29,0.006255839);
   VbbHcc_algo_H_dR__449->SetBinError(31,0.003872991);
   VbbHcc_algo_H_dR__449->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR__449->SetFillColor(ci);
   VbbHcc_algo_H_dR__449->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_algo_H_dR__449->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR__449->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__449->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR__449->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__449->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__449->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__449->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__449->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR__449->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__449->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
