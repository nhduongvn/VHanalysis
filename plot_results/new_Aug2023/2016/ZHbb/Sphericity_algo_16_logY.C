void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:17:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-3.980382,1.133333,2.248761);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,22.16172);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,22.29965);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,12.36107);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,7.992666);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,4.938337);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,2.382247);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.6670441);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.1580376);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.05790744);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.03118899);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.01671603);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.01152529);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.003813413);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.001578684);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.001138712);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.000878137);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(19,0.001143042);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.1552132);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.1543424);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1151192);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.0931663);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.07385267);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.05121918);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.0269802);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.01293093);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.007796627);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.005659897);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.00414426);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.003374195);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.001747141);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.001198667);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.001138712);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.000878137);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(19,0.001143042);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(72765);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
