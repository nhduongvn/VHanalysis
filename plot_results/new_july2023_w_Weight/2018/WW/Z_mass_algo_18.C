void Z_mass_algo_18()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Thu Aug 10 12:23:52 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(-80,-0.5158766,453.3333,4.642889);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass_stack_6 = new TH1D("VbbHcc_algo_Z_mass_stack_6","",40,0,400);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(6,0.9353742);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(8,1.470827);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(9,3.906506);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(10,2.979891);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(11,1.627894);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(12,1.423308);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(13,3.930488);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(16,0.3439428);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(17,1.831207);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(18,0.4684126);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(19,1.77427);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(20,0.313222);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(21,0.9792364);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(23,0.6599753);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(24,0.633457);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(25,0.6621218);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(26,1.118513);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(27,0.4684126);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(30,0.6109307);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(35,1.127797);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(37,1.061055);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(38,0.5130124);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(39,0.633457);
   VbbHcc_algo_Z_mass_stack_6->SetBinContent(41,13.04882);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(6,0.662314);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(8,0.8493369);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(9,1.381613);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(10,1.252402);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(11,0.9490478);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(12,0.8300578);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(13,2.430642);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(16,0.3439428);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(17,1.058755);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(18,0.4684126);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(19,1.035403);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(20,0.313222);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(21,0.692434);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(23,0.6599753);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(24,0.633457);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(25,0.6621218);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(26,0.8012746);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(27,0.4684126);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(30,0.6109307);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(35,0.8088254);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(37,0.7722904);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(38,0.5130124);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(39,0.633457);
   VbbHcc_algo_Z_mass_stack_6->SetBinError(41,2.800596);
   VbbHcc_algo_Z_mass_stack_6->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_mass_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}
