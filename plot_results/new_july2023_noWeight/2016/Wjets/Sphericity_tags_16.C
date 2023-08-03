void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug  3 12:23:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-10.19932,1.133333,91.79387);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,77.7091);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,37.97597);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,30.88768);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,15.42126);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,11.71306);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,4.289327);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,3.75234);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,0.9756776);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.561642);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.50082);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.6906038);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.5891395);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.948528);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,0.08695243);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.0875934);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2290331);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.008204514);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.06354638);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.07874792);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.146767);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,7.99002);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,3.573757);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,6.612982);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.164437);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.038436);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,0.5759692);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,1.173332);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,0.2711008);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.5188715);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,1.057443);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.21107);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.2256489);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,1.112003);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.07181854);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.0718195);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1194415);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.007783074);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.06333308);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.07139557);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.146767);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(3420);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
