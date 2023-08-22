void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Aug 22 09:20:46 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-398.6345,1.133333,3587.71);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,3037.215);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,318.6201);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,86.53472);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,26.85817);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,11.14974);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,6.713046);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.136767);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.421596);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,3.011035);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,2.146773);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.1239727);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.3258933);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.1109639);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.2629104);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.09498061);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,45.70434);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,14.42771);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,8.302283);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,2.856965);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.790694);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,1.338855);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.768625);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4154165);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.016009);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,1.190328);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1239727);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1932628);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1109639);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1961579);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.09498061);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(17726);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
