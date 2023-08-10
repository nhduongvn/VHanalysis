void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-33.9382,1.133333,214.9974);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,177.8574);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,180.6206);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,139.6066);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,101.2017);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,78.23831);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,61.78321);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,54.86839);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,46.68959);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,39.18219);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,31.6166);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,25.57297);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,24.83674);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,18.28956);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,18.34257);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,13.96944);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,11.28865);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,9.147708);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,5.263285);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.642759);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,2.662319);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,-0.01295859);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.2965452);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.06619855);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,5.865344);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,5.839928);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,5.219685);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,4.441832);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.890586);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,3.336529);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,3.388698);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,3.184399);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.841212);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.502443);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.246079);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.347971);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.938682);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.959628);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.728726);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.564637);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.436654);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.9816248);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.6922122);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.7910577);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.07336339);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.2965452);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.06619855);
   VbbHcc_both_Sphericity_stack_2->SetEntries(12006);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->Draw("HIST");
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
