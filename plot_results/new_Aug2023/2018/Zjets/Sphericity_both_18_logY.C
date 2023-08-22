void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:18:47 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.2955534,1.133333,3.456988);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,620.6923);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,637.0665);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,482.0439);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,356.1593);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,298.6391);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,206.6391);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,189.9978);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,151.2831);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,125.753);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,108.3225);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,92.23466);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,60.89278);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,64.56645);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,54.5938);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,44.05853);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,39.60279);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,29.90202);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,16.5584);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,7.91177);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,6.843549);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,2.402873);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,18.36701);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,20.14127);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,21.51195);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,15.33083);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,17.31568);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,8.854597);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,10.64779);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,8.266327);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,9.97292);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,8.988319);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,7.317646);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,3.93076);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,6.271716);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,5.545376);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,7.087546);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.352875);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,3.500103);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.377684);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.531636);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.644723);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,1.024374);
   VbbHcc_both_Sphericity_stack_4->SetEntries(18425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->Draw("HIST");
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
