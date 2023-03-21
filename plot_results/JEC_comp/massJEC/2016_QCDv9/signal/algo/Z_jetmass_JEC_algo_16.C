#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_16/Z_jetmass_JEC_algo_16
//=========  (Mon Mar 20 11:50:04 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_JEC_algo_16 = new TCanvas("Z_jetmass_JEC_algo_16", "Z_jetmass_JEC_algo_16",0,0,600,600);
   Z_jetmass_JEC_algo_16->SetHighLightColor(2);
   Z_jetmass_JEC_algo_16->Range(-65.50587,-0.04646262,351.4899,0.3266529);
   Z_jetmass_JEC_algo_16->SetFillColor(0);
   Z_jetmass_JEC_algo_16->SetFillStyle(4000);
   Z_jetmass_JEC_algo_16->SetBorderMode(0);
   Z_jetmass_JEC_algo_16->SetBorderSize(2);
   Z_jetmass_JEC_algo_16->SetLeftMargin(0.15709);
   Z_jetmass_JEC_algo_16->SetRightMargin(0.1234783);
   Z_jetmass_JEC_algo_16->SetBottomMargin(0.12);
   Z_jetmass_JEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.2893414);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",150,0,300);
   st_stack_189->SetMinimum(-0.001688756);
   st_stack_189->SetMaximum(0.2893414);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   st_stack_189->GetXaxis()->SetRange(1,150);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(4,0.03261506);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(5,0.1323895);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(6,0.1744611);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(7,0.1651134);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(8,0.1342251);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(9,0.09109306);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(10,0.09014139);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(11,0.03793547);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(12,0.02263323);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(13,0.01639736);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(14,0.01980353);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(15,0.01514786);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(16,0.00790869);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(17,0.0029041);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(18,0.003274124);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(19,-0.002837576);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(21,0.002942833);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(22,0.006127231);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(29,0.005524873);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(4,0.009894745);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(5,0.02019173);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(6,0.02273878);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(7,0.02199066);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(8,0.01970192);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(9,0.01637237);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(10,0.01636383);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(11,0.01058115);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(12,0.00902595);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(13,0.006800795);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(14,0.007656144);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(15,0.00678013);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(16,0.004628018);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(17,0.0029041);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(18,0.003274124);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(19,0.002837576);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(21,0.002942833);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(22,0.004338988);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(29,0.003925369);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(4,0.006674241);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(5,0.03769122);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(6,0.0656922);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(7,0.06261261);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(8,0.05209886);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(9,0.0398085);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(10,0.0211531);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(11,0.0153392);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(12,0.009395473);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(13,0.006362413);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(14,0.00382826);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(15,0.003495358);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(16,0.001137257);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(17,0.001797384);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(18,0.0022525);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(19,0.00114882);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(20,0.0003911379);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(22,0.0008062459);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(23,0.0004713757);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(25,0.0007451821);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(26,0.0004220871);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(4,0.001621272);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(5,0.003813725);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(6,0.005032407);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(7,0.00491048);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(8,0.004451768);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(9,0.00389999);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(10,0.002863668);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(11,0.00240932);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(12,0.001896306);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(13,0.001549902);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(14,0.001221429);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(15,0.001170599);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(16,0.0006600248);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(17,0.0008078608);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(18,0.0009237516);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(19,0.0006634751);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(20,0.0003911379);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(22,0.000571439);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(23,0.0003992831);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(25,0.0005270281);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(26,0.0004220871);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_algo_16->Modified();
   Z_jetmass_JEC_algo_16->cd();
   Z_jetmass_JEC_algo_16->SetSelected(Z_jetmass_JEC_algo_16);
}
