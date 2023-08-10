void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 10:41:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-1.833015,1.133333,5.364542);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,23293.65);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,3293.832);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,921.6268);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,338.2979);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,155.3363);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,76.82154);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,41.13166);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,25.05551);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,15.27502);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,9.823509);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,5.638771);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,4.477711);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.698359);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,1.444653);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,1.168561);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.834359);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.5288456);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.5524509);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.1540888);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.2525868);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,48.12172);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,17.56279);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,10.60853);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,5.692903);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,4.047884);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.573406);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.916214);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.466433);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,1.150864);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.9092424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.6847996);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.6064663);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.4817993);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.3516472);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.3212065);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2658559);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.221012);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.2284808);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.1090605);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.1469915);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(352917);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->Draw("HIST");
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
