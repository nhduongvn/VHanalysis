void Z_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Tue Aug 22 09:17:28 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.2,-0.7672813,6.8,1.461092);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLogy();
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.854671);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,9.134947);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,5.709342);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,4.567473);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,2.854671);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,3.425605);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,1.712803);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,1.141868);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,1.141868);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.141868);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(21,0.5709342);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,1.276648);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,2.283737);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.805452);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.614846);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.276648);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,1.398497);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.988887);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.8074229);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.8074229);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.8074229);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(21,0.5709342);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
