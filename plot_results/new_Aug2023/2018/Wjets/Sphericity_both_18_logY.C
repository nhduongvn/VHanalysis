void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:18:47 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-1.627148,1.133333,2.511318);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,53.18189);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,66.05757);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,50.96265);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,27.41851);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,25.4942);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,27.05459);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,21.82974);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,16.5738);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,9.93193);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,6.81248);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,11.69272);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,7.938125);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,4.293487);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,3.139858);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,5.995555);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.58666);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,4.602925);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,4.466804);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.4570818);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.1223852);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.1857799);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,5.312375);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,11.23498);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,6.946198);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.553635);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,4.483907);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,4.998383);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,5.090811);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,3.167189);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,2.952926);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.067678);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.830981);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,2.473969);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.9173795);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.7680788);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,2.659735);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.6590436);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,2.199891);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,2.700456);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.3263108);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.1223852);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.1857799);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->Draw("HIST");
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
