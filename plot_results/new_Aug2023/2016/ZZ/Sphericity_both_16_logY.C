void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:18:45 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-1.279839,1.133333,1.366108);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,6.667524);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,4.873249);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,4.244482);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,3.699704);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,1.920711);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,2.069758);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,1.520628);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,2.073461);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,0.8335072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,0.3852276);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,0.8661598);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,1.247883);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.6190122);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.4040284);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,0.4257634);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.1931017);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.2071046);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.179507);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.008904);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,0.9351438);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,0.8810444);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,0.6423995);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.665414);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,0.5464099);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,0.6623977);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.4170124);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.2733122);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.4336145);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.520855);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.359355);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.2882206);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.3010603);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.1931017);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.2071046);
   VbbHcc_both_Sphericity_stack_8->SetEntries(158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
