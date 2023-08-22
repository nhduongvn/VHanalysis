void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:18:47 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-1.60881,1.133333,4.59843);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,4586.819);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,5013.683);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,3745.266);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,2825.91);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,2198.635);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1756.7);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1452.05);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,1214.637);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,1031.558);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,852.6511);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,741.1541);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,631.2009);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,536.0099);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,446.7583);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,368.5991);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,298.6107);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,229.7355);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,162.4917);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,96.99814);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,46.25181);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,16.80112);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,6.907867);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.457457);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.2055626);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,20.49697);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,20.4933);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,17.84256);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,15.18127);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,14.04937);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,12.11743);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,10.87366);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,10.15906);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,9.24238);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,8.312495);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,8.372768);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,7.177193);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,7.016433);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,5.939148);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,5.356837);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,5.963042);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,4.279995);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,3.886637);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.775992);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.938679);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,1.146487);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.7175261);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.330432);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.1040635);
   VbbHcc_both_Sphericity_stack_3->SetEntries(416844);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
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
