void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.452699,1.133333,4.83311);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,8452.41);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,6941.004);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,3921.684);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,2287.888);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1316.416);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,774.3372);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,466.8847);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,291.3392);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,195.7307);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,133.5716);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,91.84864);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,69.51365);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,50.00326);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,39.94627);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,30.66043);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,22.23084);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,14.34703);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,9.876845);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,6.220977);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,2.548088);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,1.092113);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.2998553);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,22.84842);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,20.69606);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,15.55779);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,11.88364);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,9.013445);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,6.91198);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,5.358284);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,4.225639);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,3.47246);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.866176);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.376406);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,2.061833);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.758149);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.566377);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.370932);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.169221);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.9388427);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.7806187);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.6203193);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.3993367);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.2678624);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1361806);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(421807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->Draw("HIST");
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
