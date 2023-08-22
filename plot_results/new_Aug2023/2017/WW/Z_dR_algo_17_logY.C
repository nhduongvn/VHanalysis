void Z_dR_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Tue Aug 22 09:17:06 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.2,-1.141983,6.8,0.9393149);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLogy();
   Z_dR_algo_17->SetLeftMargin(0.15);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,2.842079);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,2.242197);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,2.323452);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,1.648192);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,2.19602);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,1.420928);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,0.546279);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,0.9560132);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,0.8136933);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.8013858);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,1.100093);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,2.045106);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,1.151455);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,0.6467053);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.232904);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.324932);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.2836788);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.3826602);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,0.3041425);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.3341271);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.3528268);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(25,0.3445159);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.3478197);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.3776423);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.9149741);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,0.8052479);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.8351712);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.7395104);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.8536976);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.6410689);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.389617);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.5526841);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.478992);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.463301);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.5570419);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.8479435);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.6708883);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.4577968);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.232904);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.6278926);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.2836788);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.3826602);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.3041425);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.3341271);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.3528268);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(25,0.3445159);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.3478197);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.3776423);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
