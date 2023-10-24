#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_tagFirst_Z_mass()
{
//=========Macro generated from canvas: VbbHcc_tagFirst_Z_mass/VbbHcc_tagFirst_Z_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_tagFirst_Z_mass = new TCanvas("VbbHcc_tagFirst_Z_mass", "VbbHcc_tagFirst_Z_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_tagFirst_Z_mass->SetHighLightColor(2);
   VbbHcc_tagFirst_Z_mass->Range(-80,-3572.494,453.3333,32152.44);
   VbbHcc_tagFirst_Z_mass->SetFillColor(0);
   VbbHcc_tagFirst_Z_mass->SetBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetBorderSize(2);
   VbbHcc_tagFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_Z_mass__27 = new TH1D("VbbHcc_tagFirst_Z_mass__27","",40,0,400);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(3,68);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(4,3275);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(5,13872);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(6,23765);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(7,27219);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(8,26397);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(9,24588);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(10,22563);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(11,20111);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(12,18490);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(13,17609);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(14,16565);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(15,15502);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(16,14692);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(17,13822);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(18,12852);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(19,11960);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(20,11391);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(21,10615);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(22,10100);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(23,9628);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(24,9281);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(25,8937);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(26,8547);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(27,8169);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(28,7878);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(29,7855);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(30,7559);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(31,7231);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(32,7029);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(33,7040);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(34,6535);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(35,6405);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(36,6344);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(37,6246);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(38,6024);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(39,5895);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(40,5755);
   VbbHcc_tagFirst_Z_mass__27->SetBinContent(41,245215);
   VbbHcc_tagFirst_Z_mass__27->SetEntries(693029);
   VbbHcc_tagFirst_Z_mass__27->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_tagFirst_Z_mass__27->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_Z_mass__27->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__27->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__27->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__27->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_Z_mass__27->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__27->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__27->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Z_mass__27->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Z_mass__27->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Z_mass__27->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_tagFirst_Z_mass->Modified();
   VbbHcc_tagFirst_Z_mass->cd();
   VbbHcc_tagFirst_Z_mass->SetSelected(VbbHcc_tagFirst_Z_mass);
}
