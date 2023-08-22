void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:16:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-3.062631,1.133333,1.895046);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,13.23517);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,11.53806);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,6.422832);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,4.402143);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,3.169072);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.648881);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.626426);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.2832601);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2168434);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1143735);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.07392904);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.06284793);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.04856931);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.040209);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02521567);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03920472);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01525478);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01145991);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.006259477);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.005422089);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.1467891);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1356909);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1007957);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.08398916);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.07209341);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.0524885);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.03212932);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.02158121);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01913406);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01373435);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.01096685);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01023866);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.009081149);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.008257608);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.006455389);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.007959929);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.004941243);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.004396445);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.003162901);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.003133913);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28819);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
