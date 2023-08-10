void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-1.495482,1.133333,13.45933);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,11.26869);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,11.39414);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,8.400216);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,7.274213);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,5.82241);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,4.773023);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,4.093307);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,3.383864);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.864402);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,2.396028);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.999936);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.54871);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.424191);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,1.06449);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.9515772);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.8264578);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.504669);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.4033611);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1673064);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06995013);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02869395);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.002488613);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.187913);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1832346);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.1921501);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1538026);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1354);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.1165184);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.1182643);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.1040766);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.09408658);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.0907397);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.07459925);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.06611616);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.06705922);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.05629167);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.0518004);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.06276688);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.0418309);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.03403794);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.02110373);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01352104);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.008792175);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002488613);
   VbbHcc_both_Sphericity_stack_9->SetEntries(27714);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->Draw("HIST");
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
