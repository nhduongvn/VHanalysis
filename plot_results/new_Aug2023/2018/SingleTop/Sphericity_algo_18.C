void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-523.0858,1.133333,4707.772);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,3985.415);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,3758.141);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,2124.735);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1210.076);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,657.0434);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,315.6694);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,131.7799);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,55.35632);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,27.11063);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,12.07132);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,9.63859);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,5.998212);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,4.035649);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3.013789);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.678452);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,1.965152);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.453386);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.450321);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.2131275);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.2712607);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.06099754);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,28.20568);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,27.59364);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,23.6645);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,15.97696);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,11.93343);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,9.498275);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,5.936871);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.300323);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.236956);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.445004);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.284309);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.049599);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.8084707);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.756407);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.7766006);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.6048814);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4689066);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.3276833);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.1071812);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.2712607);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.06099754);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(152694);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
