void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:21:51 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-3.520408,1.133333,1.495459);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,4.748488);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,5.203828);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,3.834305);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,2.955909);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,2.609312);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,2.088283);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.73047);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,1.52205);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,1.289668);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,1.128646);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.9725498);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.8225028);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.6955868);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.6223943);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.4851449);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.4072062);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.2835652);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.2136499);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.1328999);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.05991162);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.01336627);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.004518437);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001915176);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.05532044);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.05788033);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.04971653);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.04366188);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.04101212);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.03673514);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.03337791);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.03128501);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02888486);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.02700609);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.02507968);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.02303755);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.02120885);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.02008948);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01768269);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01617546);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.01354097);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.01169308);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.009222673);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.006227237);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002936411);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.00171422);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.001105742);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
