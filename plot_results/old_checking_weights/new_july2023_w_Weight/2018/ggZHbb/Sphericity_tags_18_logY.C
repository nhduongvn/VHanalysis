void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 10:41:10 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-4.085534,1.133333,1.88069);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,10.15124);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,8.515171);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,4.711276);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,3.081551);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.846509);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,1.049935);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.547593);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.3115779);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.231468);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1735649);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.1172848);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.09439457);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.07601784);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.05944808);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.05851227);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.03574818);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.02704005);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.02425567);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.0106634);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.00256409);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001944759);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.001390994);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0006488114);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.08089709);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.07413405);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.05518107);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.04457803);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.03452525);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.02601639);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01874041);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.01413152);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.01210596);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.0105442);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.008692934);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.007742443);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.006945239);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.006123328);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.006091853);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.004747363);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.004158016);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.003909567);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.002618963);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.001287839);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.001124813);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.000983581);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0006488114);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(48968);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
