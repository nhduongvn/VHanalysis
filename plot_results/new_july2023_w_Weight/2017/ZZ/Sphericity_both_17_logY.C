void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:21:50 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-1.117659,1.133333,1.535157);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,6.047674);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,9.824859);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,4.515946);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,4.308449);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,4.642819);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.028477);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,4.175127);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,3.399745);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.742059);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,2.319697);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.359856);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.851384);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,1.094906);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,1.231649);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.3219442);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.2809655);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.341172);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.706206);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.112144);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.117383);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.148155);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.9296223);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.130071);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.9947504);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.8836277);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.874815);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.6252194);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.7155234);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.5530954);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.6163454);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.3219442);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2809655);
   VbbHcc_both_Sphericity_stack_8->SetEntries(184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
