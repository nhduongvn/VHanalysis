#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_all = new TCanvas("Z_dR_Bj1_algo_all", "Z_dR_Bj1_algo_all",0,0,600,600);
   Z_dR_Bj1_algo_all->SetHighLightColor(2);
   Z_dR_Bj1_algo_all->Range(-1.310117,-3.355297,7.029799,0.4908568);
   Z_dR_Bj1_algo_all->SetFillColor(0);
   Z_dR_Bj1_algo_all->SetFillStyle(4000);
   Z_dR_Bj1_algo_all->SetBorderMode(0);
   Z_dR_Bj1_algo_all->SetBorderSize(2);
   Z_dR_Bj1_algo_all->SetLogy();
   Z_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(16.89681);
   st_stack_120->SetMaximum(1.277148);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_120->GetXaxis()->SetRange(1,30);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Event/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetTitleSize(0.037);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.003230685);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,0.6591253);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,1.129169);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,0.7637301);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,0.3789579);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,0.1390197);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.06915838);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.05567972);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.02715491);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.01852953);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.01463647);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.01325124);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.0112289);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.008342038);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.0156174);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.007158958);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.002886864);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.004069943);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.004590648);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.001183079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(1,0.002364818);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,0.03267761);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,0.04253453);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,0.03501658);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,0.02479813);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,0.01493165);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,0.01041222);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,0.009095135);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,0.006402008);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,0.005467921);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,0.004940579);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,0.004484764);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,0.004313185);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,0.003781667);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,0.004786697);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,0.003591842);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,0.002074261);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(18,0.002387935);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(19,0.002684295);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(20,0.001183079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.0001554272);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,0.1533657);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,0.397186);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,0.3094251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.1237621);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.03435025);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.02092993);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.01574208);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.01200389);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.009355408);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.008251039);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.006516562);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.005739174);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.00477314);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.003616234);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.004444437);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.003150204);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.002209452);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.001389186);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.0004486854);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(1,0.0001554272);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,0.005692991);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,0.009143414);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,0.008048259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,0.005116953);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,0.00268012);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,0.00208197);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,0.001821147);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,0.001630709);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,0.001409819);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,0.001323705);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,0.001141817);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,0.00110788);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,0.0009774806);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,0.0008718905);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,0.0009898373);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,0.0008020486);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,0.0006820482);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,0.0005684978);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,0.0003172685);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_all->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->SetSelected(Z_dR_Bj1_algo_all);
}
