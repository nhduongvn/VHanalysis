#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_all_logY()
{
//=========Macro generated from canvas: Z_pt_algo_all/Z_pt_algo_all
//=========  (Fri Mar 10 11:27:13 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_all = new TCanvas("Z_pt_algo_all", "Z_pt_algo_all",0,0,600,600);
   Z_pt_algo_all->SetHighLightColor(2);
   Z_pt_algo_all->Range(37.97653,-0.4168248,1705.96,1.418253);
   Z_pt_algo_all->SetFillColor(0);
   Z_pt_algo_all->SetFillStyle(4000);
   Z_pt_algo_all->SetBorderMode(0);
   Z_pt_algo_all->SetBorderSize(2);
   Z_pt_algo_all->SetLogy();
   Z_pt_algo_all->SetLeftMargin(0.15709);
   Z_pt_algo_all->SetRightMargin(0.1234783);
   Z_pt_algo_all->SetBottomMargin(0.12);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   Z_pt_algo_all->SetFrameFillStyle(1000);
   Z_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(13.96948);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",40,0,2000);
   st_stack_76->SetMinimum(0.6358936);
   st_stack_76->SetMaximum(17.16899);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_76->GetXaxis()->SetRange(7,30);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetTitleOffset(1);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetTitleSize(0.037);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetTitleOffset(1);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_1 = new TH1D("VbbHcc_algo_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(1,2.515509);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(2,8.074007);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(3,11.59467);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(4,7.24865);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(5,4.655166);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(6,2.470796);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(7,1.48063);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(8,0.8856093);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(9,0.4739216);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(10,0.2324141);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(11,0.1312897);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(12,0.06811084);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(13,0.05729984);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(14,0.03568368);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(15,0.01387389);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(16,0.006021016);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(17,0.02321469);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(18,0.006729509);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(19,0.005513116);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(20,0.007154057);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(24,0.002353691);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinContent(25,0.001995241);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(1,0.08144401);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(2,0.1424632);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(3,0.1748672);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(4,0.1435568);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(5,0.1157553);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(6,0.08128703);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(7,0.06193702);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(8,0.0475286);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(9,0.03475451);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(10,0.02426069);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(11,0.01778457);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(12,0.01303415);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(13,0.01201737);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(14,0.009152249);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(15,0.005868816);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(16,0.003501944);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(17,0.009135448);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(18,0.004025546);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(19,0.003193063);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(20,0.004131867);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(24,0.002353691);
   VbbHcc_algo_Z_pt_all_stack_1->SetBinError(25,0.001995241);
   VbbHcc_algo_Z_pt_all_stack_1->SetEntries(18048);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_all_stack_2 = new TH1D("VbbHcc_algo_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(1,0.7797326);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(2,2.247151);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(3,4.25958);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(4,3.242953);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(5,1.901338);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(6,1.047935);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(7,0.5085577);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(8,0.25302);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(9,0.1096909);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(10,0.05616651);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(11,0.02286557);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(12,0.01608267);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(13,0.006362917);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(14,0.004185735);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(15,0.002138921);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(16,0.0005722238);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(17,0.0003751833);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(18,0.0008344118);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(19,0.0002586282);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinContent(22,0.0004083722);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(1,0.01592178);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(2,0.02773075);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(3,0.03810616);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(4,0.03278524);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(5,0.02517644);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(6,0.01894086);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(7,0.01289023);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(8,0.00904174);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(9,0.005995252);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(10,0.004277739);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(11,0.002739882);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(12,0.002313842);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(13,0.001461448);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(14,0.001181582);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(15,0.0008658907);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(16,0.0004081722);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(17,0.0003751833);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(18,0.0004866722);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(19,0.0001931736);
   VbbHcc_algo_Z_pt_all_stack_2->SetBinError(22,0.0004083722);
   VbbHcc_algo_Z_pt_all_stack_2->SetEntries(48229);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_all->Modified();
   Z_pt_algo_all->cd();
   Z_pt_algo_all->SetSelected(Z_pt_algo_all);
}
