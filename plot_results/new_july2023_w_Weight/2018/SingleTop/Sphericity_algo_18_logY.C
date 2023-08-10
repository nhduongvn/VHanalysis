void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 10:42:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-2.126447,1.133333,4.583124);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,4311.398);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,4049.184);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,2296.644);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1311.119);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,710.5693);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,341.6884);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,143.1119);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,59.91709);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,29.025);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,13.45651);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,10.39981);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,6.544314);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,4.182404);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3.195336);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.863878);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2.223201);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.636132);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.4866238);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.2375921);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.2967841);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.07007135);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,30.48954);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,29.72127);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,25.73943);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,17.28518);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,12.88763);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,10.27308);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,6.477345);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.583994);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.430186);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.574036);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.396311);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.141191);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.8688746);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.8154892);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.8459863);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.6663519);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.5191253);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.3595091);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.1200267);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.2967841);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.07007135);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(153765);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
